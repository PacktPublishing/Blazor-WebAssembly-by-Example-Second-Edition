namespace LocalStorage.Services
{
    public interface ILocalStorageService
    {
        ValueTask SetItemAsync<T>(string key, T item);
        ValueTask<T?> GetItemAsync<T>(string key);
    }
}
