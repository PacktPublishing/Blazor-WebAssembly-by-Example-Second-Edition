#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
176,
181,
182,
183,
184,
185,
186,
187,
189,
190,
236,
237,
239,
261,
262,
263,
272,
273,
274,
275,
348,
349,
350,
353,
382,
383,
385,
387,
389,
391,
396,
404,
405,
406,
407,
408,
409,
410,
411,
412,
443,
444,
445,
526,
534,
537,
539,
544,
545,
547,
548,
552,
553,
555,
556,
559,
560,
561,
564,
567,
569,
571,
632,
634,
636,
645,
646,
647,
649,
655,
656,
657,
658,
659,
667,
668,
669,
673,
674,
676,
678,
852,
993,
994,
5010,
5011,
5013,
5014,
5015,
5016,
5017,
5019,
5021,
5023,
5029,
5031,
5035,
5036,
5038,
5040,
5042,
5053,
5062,
5063,
5065,
5066,
5067,
5068,
5069,
5071,
5073,
5896,
5900,
5902,
5903,
5904,
5905,
5977,
5978,
5979,
5980,
5998,
5999,
6000,
6036,
6088,
6099,
6100,
6101,
6333,
6335,
6336,
6361,
6379,
6385,
6392,
6402,
6405,
6479,
6488,
6490,
6491,
6497,
6510,
6530,
6531,
6544,
6546,
6553,
6554,
6557,
6559,
6564,
6570,
6571,
6578,
6580,
6592,
6595,
6596,
6597,
6608,
6617,
6623,
6624,
6625,
6627,
6628,
6647,
6661,
6683,
6684,
6703,
6727,
6728,
7088,
7089,
7219,
7394,
7395,
7398,
7401,
7450,
7690,
7691,
8304,
8325,
8332,
8334,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 176,
ves_icall_System_Array_InternalCreate,
// token 181,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 182,
ves_icall_System_Array_CanChangePrimitive,
// token 183,
ves_icall_System_Array_FastCopy_raw,
// token 184,
ves_icall_System_Array_GetLength_raw,
// token 185,
ves_icall_System_Array_GetLowerBound_raw,
// token 186,
ves_icall_System_Array_GetGenericValue_icall,
// token 187,
ves_icall_System_Array_GetValueImpl_raw,
// token 189,
ves_icall_System_Array_SetValueImpl_raw,
// token 190,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 236,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 237,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 239,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 261,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 262,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 263,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 272,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 273,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 274,
ves_icall_System_Enum_InternalGetCorElementType,
// token 275,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 348,
ves_icall_System_Environment_get_ProcessorCount,
// token 349,
ves_icall_System_Environment_get_TickCount,
// token 350,
ves_icall_System_Environment_get_TickCount64,
// token 353,
ves_icall_System_Environment_FailFast_raw,
// token 382,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 383,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 385,
ves_icall_System_GC_SuppressFinalize_raw,
// token 387,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 389,
ves_icall_System_GC_GetGCMemoryInfo,
// token 391,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 396,
ves_icall_System_Object_MemberwiseClone_raw,
// token 404,
ves_icall_System_Math_Ceiling,
// token 405,
ves_icall_System_Math_Cos,
// token 406,
ves_icall_System_Math_Floor,
// token 407,
ves_icall_System_Math_Log10,
// token 408,
ves_icall_System_Math_Pow,
// token 409,
ves_icall_System_Math_Sin,
// token 410,
ves_icall_System_Math_Sqrt,
// token 411,
ves_icall_System_Math_Tan,
// token 412,
ves_icall_System_Math_ModF,
// token 443,
ves_icall_System_MathF_Ceiling,
// token 444,
ves_icall_System_MathF_Floor,
// token 445,
ves_icall_System_MathF_ModF,
// token 526,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 534,
ves_icall_RuntimeType_make_array_type_raw,
// token 537,
ves_icall_RuntimeType_make_byref_type_raw,
// token 539,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 544,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 545,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 547,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 548,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 552,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 553,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 555,
ves_icall_System_RuntimeType_getFullName_raw,
// token 556,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 559,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 560,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 561,
ves_icall_RuntimeType_GetFields_native_raw,
// token 564,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 567,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 569,
ves_icall_RuntimeType_GetName_raw,
// token 571,
ves_icall_RuntimeType_GetNamespace_raw,
// token 632,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 634,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 636,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 645,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 646,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 647,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 649,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 655,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 656,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 657,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 658,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 659,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 667,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 668,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 669,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 673,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 674,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 676,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 678,
ves_icall_System_String_FastAllocateString_raw,
// token 852,
ves_icall_System_Type_internal_from_handle_raw,
// token 993,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 994,
ves_icall_System_ValueType_Equals_raw,
// token 5010,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5011,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5013,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5014,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5015,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5016,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5017,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5019,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5021,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5023,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5029,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5031,
mono_monitor_exit_icall_raw,
// token 5035,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5036,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5038,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5040,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5042,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5053,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5062,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5063,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5065,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5066,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5067,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5068,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5069,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5071,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5073,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5896,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5900,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5902,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5903,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5904,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5905,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 5977,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 5978,
ves_icall_System_GCHandle_InternalFree_raw,
// token 5979,
ves_icall_System_GCHandle_InternalGet_raw,
// token 5980,
ves_icall_System_GCHandle_InternalSet_raw,
// token 5998,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 5999,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6000,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6036,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6088,
mono_object_hash_icall_raw,
// token 6099,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6100,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6101,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6333,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6335,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6336,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6361,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6379,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6385,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6392,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6402,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6405,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6479,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6488,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 6490,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6491,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6497,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6510,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6530,
ves_icall_reflection_get_token_raw,
// token 6531,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6544,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6546,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6553,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6554,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6557,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6559,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6564,
ves_icall_reflection_get_token_raw,
// token 6570,
ves_icall_get_method_info_raw,
// token 6571,
ves_icall_get_method_attributes,
// token 6578,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6580,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6592,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6595,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6596,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6597,
ves_icall_reflection_get_token_raw,
// token 6608,
ves_icall_InternalInvoke_raw,
// token 6617,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6623,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6624,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6625,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6627,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6628,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6647,
ves_icall_InternalInvoke_raw,
// token 6661,
ves_icall_reflection_get_token_raw,
// token 6683,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 6684,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6703,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6727,
ves_icall_reflection_get_token_raw,
// token 6728,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7088,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7089,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7219,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7394,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7395,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7398,
ves_icall_ModuleBuilder_getToken_raw,
// token 7401,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7450,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7690,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7691,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8304,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8325,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8332,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8334,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
