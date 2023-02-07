using Microsoft.AspNetCore.Components;

namespace Demo.Pages
{
    public partial class CounterCodeBehind
    {
        [Parameter]
        public int? Increment { get; set; }

        private int increment = 1;
        private int currentCount = 0;
        protected override void OnParametersSet()
        {
            if (Increment.HasValue)
                increment = Increment.Value;
        }

        private void IncrementCount()
        {
            currentCount += increment;
        }
    }
}