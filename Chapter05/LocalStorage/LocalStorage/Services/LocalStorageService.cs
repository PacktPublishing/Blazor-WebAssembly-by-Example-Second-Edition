using Microsoft.JSInterop;
using System.Text.Json;

namespace LocalStorage.Services
{
    public class LocalStorageService : ILocalStorageService
    {
        private IJSRuntime js;
        public LocalStorageService(IJSRuntime JsRuntime)
        {
            js = JsRuntime;
        }

        public async ValueTask SetItemAsync<T>(string key, T item)
        {
            await js.InvokeVoidAsync(
                "bweInterop.setLocalStorage",
                 key,
                 JsonSerializer.Serialize(item));
        }

        public async ValueTask<T?> GetItemAsync<T>(string key)
        {
            var json = await js.InvokeAsync<string>
                ("bweInterop.getLocalStorage", key);
            return JsonSerializer.Deserialize<T>(json);
        }

    }
}
