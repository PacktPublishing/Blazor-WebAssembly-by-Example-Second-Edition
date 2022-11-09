using LocalStorage.Models;
using LocalStorage.Services;
using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;

namespace LocalStorage.Pages
{
    public partial class Index
    {
        [Inject]
        ILocalStorageService? localStorage { get; set; }
        [Inject]
        IJSRuntime js { get; set; }
        private IJSObjectReference? module;
        private string? data;

        async Task SaveToLocalStorageAsync()
        {
            var dataInfo = new DataInfo()
            {
                Value = data,
                Length = data!.Length,
                Timestamp = DateTime.Now
            };

            await localStorage!.SetItemAsync<DataInfo?>(
                "localStorageData",
                dataInfo);
        }
        protected override async Task OnAfterRenderAsync(bool firstRender)
        {
            if (firstRender)
            {
                module = await js.InvokeAsync<IJSObjectReference>
                        ("import", "./Pages/Index.razor.js");
            }
        }
        async Task ReadFromLocalStorageAsync()
        {
            if (module is not null)
            {
                DataInfo? savedData =
                    await localStorage!.GetItemAsync
                        <DataInfo>("localStorageData");

                string result =
                    $"localStorageData = {savedData!.Value}";

                await module.InvokeVoidAsync
                    ("showLocalStorage", result);
            }
        }

    }
}
