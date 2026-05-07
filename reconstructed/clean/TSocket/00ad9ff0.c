// Function: FUN_00ad9ff0
// Address: 00ad9ff0
// Size: 579 bytes
// Class: TSocket

void FUN_00ad9ff0(ulong param_1,string *param_2)

{
  int64_t lVar1;
  uint uVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  uint uVar6;
  bad_alloc *this;
  string *psVar7;
  bad_alloc *pbVar8;
  uint unaff_ESI;
  int64_t this_ptr;
  bool bVar9;
  uint32_t uVar10;
  
  uVar2 = *(int *)(this_ptr + 0x20) - *(int *)(this_ptr + 0x18);
  if (uVar2 < unaff_ESI) {
    if (*(char *)(this_ptr + 0x38) == '\0') {
      puVar4 = (void*)___cxa_allocate_exception();
      puVar5 = operator_new(param_1);
      puVar5[4] = 0x66754279726f6d65;
      puVar5[3] = 0x4d206c616e726574;
      puVar5[2] = 0x7865206e69206563;
      puVar5[1] = 0x61707320746e6569;
      *puVar5 = 0x6369666675736e49;
      *(void*)((int64_t)puVar5 + 0x27) = 0x72656666;
      *(void*)((int64_t)puVar5 + 0x2b) = 0;
      *puVar4 = &g_02517278;
      uVar10 = std::string::string((string *)0x6369666675736e49,param_2);
      *puVar4 = &g_0252c498;
      *(void*)(puVar4 + 4) = 0;
                          ___cxa_throw(uVar10,FUN_00953b70);
    }
    pbVar8 = (bad_alloc *)(uint64_t)*(uint *)(this_ptr + 0x30);
    uVar6 = *(uint *)(this_ptr + 0x34);
    this = (bad_alloc *)(uint64_t)uVar6;
    psVar7 = (string *)((int64_t)&MACH_HEADER.magic + 1);
    do {
      bVar9 = pbVar8 == (bad_alloc *)0x0;
      pbVar8 = (bad_alloc *)((int64_t)pbVar8 * 2);
      if (bVar9) {
        pbVar8 = (bad_alloc *)((int64_t)&MACH_HEADER.magic + 1);
      }
      if (this < pbVar8) {
        puVar4 = (void*)___cxa_allocate_exception();
        puVar5 = operator_new(uVar6);
        *(void*)((int64_t)puVar5 + 0x15) = 0x776f6c667265766f;
        puVar5[2] = 0x65766f20657a6973;
        puVar5[1] = 0x2072656666756220;
        *puVar5 = 0x6c616e7265746e49;
        *(void*)((int64_t)puVar5 + 0x1d) = 0;
        *puVar4 = &g_02517278;
        uVar10 = std::string::string((string *)0x6c616e7265746e49,psVar7);
        *puVar4 = &g_0252c498;
        *(void*)(puVar4 + 4) = 5;
                            ___cxa_throw(uVar10,FUN_00953b70);
      }
    } while ((uVar2 - *(uint *)(this_ptr + 0x30)) + (int)pbVar8 < unaff_ESI);
    pvVar3 = _realloc(this,1);
    if (pvVar3 == (void *)0x0) {
      ___cxa_allocate_exception();
      uVar10 = std::bad_alloc::bad_alloc(this);
                          ___cxa_throw(uVar10,PTR__bad_alloc_0249c2b0);
    }
    lVar1 = *(int64_t *)(this_ptr + 0x28);
    *(int64_t *)(this_ptr + 8) = (*(int64_t *)(this_ptr + 8) - lVar1) + (int64_t)pvVar3;
    *(int64_t *)(this_ptr + 0x10) = (*(int64_t *)(this_ptr + 0x10) - lVar1) + (int64_t)pvVar3;
    *(int64_t *)(this_ptr + 0x18) = (*(int64_t *)(this_ptr + 0x18) - lVar1) + (int64_t)pvVar3;
    *(bad_alloc **)(this_ptr + 0x20) = (bad_alloc *)((int64_t)pvVar3 + (int64_t)pbVar8);
    *(void **)(this_ptr + 0x28) = pvVar3;
    *(int *)(this_ptr + 0x30) = (int)pbVar8;
  }
  return;
}

