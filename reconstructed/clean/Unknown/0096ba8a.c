// Function: FUN_0096ba8a
// Address: 0096ba8a
// Size: 621 bytes
// Class: Unknown

uint32_t FUN_0096ba8a(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  void*arg1;
  int iVar7;
  int iVar8;
  int local_1ec;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar3 = FUN_00969dba();
  if (iVar3 < 0) {
    FUN_0096936d();
  }
  uVar2 = (int64_t)(*(int *)((int64_t)arg1 + 0x24) + -1) / (int64_t)*(int *)(arg1 + 4);
  iVar3 = FUN_00969226();
  if (*(int *)((int64_t)arg1 + 0x24) < iVar3) {
    FUN_0096936d();
    uVar6 = 0;
  }
  else {
    iVar7 = (int)uVar2;
    iVar4 = iVar7 + 1;
    FUN_0096a17b(arg1[3],arg1[2],2);
    FUN_009740e6();
    FUN_0096a101();
    FUN_0096a101();
    iVar3 = *(int *)arg1[3];
    iVar8 = (2 << ((byte)*(void*)(arg1 + 4) & 0x1f)) * iVar3;
    iVar5 = FUN_00969e9f(*(void*)(arg1 + 4),iVar4,uVar2 & 0xffffffff);
    if (0 < iVar5) {
      local_1ec = iVar5 * iVar3 * 2;
      FUN_009695d4(iVar8,*arg1);
    }
    if (0 < iVar7) {
      iVar7 = iVar4;
      do {
        iVar5 = FUN_00969e9f(*(void*)(arg1 + 4),iVar4,iVar7 + -2);
        FUN_0096a6b8();
        if (0 < iVar5) {
          local_1ec = iVar5 * iVar3 * 2;
          FUN_009695d4(iVar8,*arg1,&local_1ec);
          FUN_0096acb3();
        }
        iVar7 = iVar7 + -1;
      } while (1 < iVar7);
    }
    uVar6 = FUN_0096a4c9(param_3,param_1);
    FUN_009740e6();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar6;
  }
                      ___stack_chk_fail();
}

