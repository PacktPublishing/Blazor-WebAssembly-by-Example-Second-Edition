using ShoppingCart.Models;

namespace ShoppingCart.Services
{
    public class CartService : ICartService
    {
        private List<Product> cart = new();
        private int total;

        public IList<Product> Cart
        {
            get => cart;
        }
        public int Total
        {
            get => total;
        }

        public event Action? OnChange;
        private void NotifyStateChanged() => OnChange?.Invoke();
        public void AddProduct(Product product)
        {
            cart.Add(product);
            total += product.Price;
            NotifyStateChanged();
        }
        public void DeleteProduct(Product product)
        {
            cart.Remove(product);
            total -= product.Price;
            NotifyStateChanged();
        }
    }
}
