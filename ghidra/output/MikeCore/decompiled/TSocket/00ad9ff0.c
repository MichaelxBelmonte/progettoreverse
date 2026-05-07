// Function: FUN_00ad9ff0
// Address: 00ad9ff0
// Size: 579 bytes
// Class: TSocket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad9ff0(ulong param_1,string *param_2)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  bad_alloc *this;
  string *psVar7;
  bad_alloc *pbVar8;
  uint unaff_ESI;
  longlong unaff_RDI;
  bool bVar9;
  undefined4 uVar10;
  
  uVar2 = *(int *)(unaff_RDI + 0x20) - *(int *)(unaff_RDI + 0x18);
  if (uVar2 < unaff_ESI) {
    if (*(char *)(unaff_RDI + 0x38) == '\0') {
      puVar4 = (undefined8 *)___cxa_allocate_exception();
      puVar5 = operator_new(param_1);
      puVar5[4] = 0x66754279726f6d65;
      puVar5[3] = 0x4d206c616e726574;
      puVar5[2] = 0x7865206e69206563;
      puVar5[1] = 0x61707320746e6569;
      *puVar5 = 0x6369666675736e49;
      *(undefined4 *)((longlong)puVar5 + 0x27) = 0x72656666;
      *(undefined1 *)((longlong)puVar5 + 0x2b) = 0;
      *puVar4 = &DAT_02517278;
      uVar10 = std::string::string((string *)0x6369666675736e49,param_2);
      *puVar4 = &DAT_0252c498;
      *(undefined4 *)(puVar4 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar10,FUN_00953b70);
    }
    pbVar8 = (bad_alloc *)(ulonglong)*(uint *)(unaff_RDI + 0x30);
    uVar6 = *(uint *)(unaff_RDI + 0x34);
    this = (bad_alloc *)(ulonglong)uVar6;
    psVar7 = (string *)((longlong)&MACH_HEADER.magic + 1);
    do {
      bVar9 = pbVar8 == (bad_alloc *)0x0;
      pbVar8 = (bad_alloc *)((longlong)pbVar8 * 2);
      if (bVar9) {
        pbVar8 = (bad_alloc *)((longlong)&MACH_HEADER.magic + 1);
      }
      if (this < pbVar8) {
        puVar4 = (undefined8 *)___cxa_allocate_exception();
        puVar5 = operator_new(uVar6);
        *(undefined8 *)((longlong)puVar5 + 0x15) = 0x776f6c667265766f;
        puVar5[2] = 0x65766f20657a6973;
        puVar5[1] = 0x2072656666756220;
        *puVar5 = 0x6c616e7265746e49;
        *(undefined1 *)((longlong)puVar5 + 0x1d) = 0;
        *puVar4 = &DAT_02517278;
        uVar10 = std::string::string((string *)0x6c616e7265746e49,psVar7);
        *puVar4 = &DAT_0252c498;
        *(undefined4 *)(puVar4 + 4) = 5;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar10,FUN_00953b70);
      }
    } while ((uVar2 - *(uint *)(unaff_RDI + 0x30)) + (int)pbVar8 < unaff_ESI);
    pvVar3 = _realloc(this,1);
    if (pvVar3 == (void *)0x0) {
      ___cxa_allocate_exception();
      uVar10 = std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar10,PTR__bad_alloc_0249c2b0);
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
    *(longlong *)(unaff_RDI + 8) = (*(longlong *)(unaff_RDI + 8) - lVar1) + (longlong)pvVar3;
    *(longlong *)(unaff_RDI + 0x10) = (*(longlong *)(unaff_RDI + 0x10) - lVar1) + (longlong)pvVar3;
    *(longlong *)(unaff_RDI + 0x18) = (*(longlong *)(unaff_RDI + 0x18) - lVar1) + (longlong)pvVar3;
    *(bad_alloc **)(unaff_RDI + 0x20) = (bad_alloc *)((longlong)pvVar3 + (longlong)pbVar8);
    *(void **)(unaff_RDI + 0x28) = pvVar3;
    *(int *)(unaff_RDI + 0x30) = (int)pbVar8;
  }
  return;
}


