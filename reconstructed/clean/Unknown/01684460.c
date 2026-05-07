// Function: FUN_01684460
// Address: 01684460
// Size: 501 bytes
// Class: Unknown

void FUN_01684460(int64_t *param_1,uint64_t param_2,int64_t *param_3,int param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *pvVar7;
  void* pVar8;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  
  if ((param_1 != (int64_t *)0x0) && (*param_1 != 0)) {
    *param_1 = 0;
    if ((char)param_1[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(param_1 + 1) = 0;
  }
  if ((param_3 != (int64_t *)0x0) && (*param_3 != 0)) {
    *param_3 = 0;
    if ((char)param_3[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(param_3 + 1) = 0;
  }
  lVar1 = *(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30);
  if ((lVar1 != 0) && (iVar2 = (**(code **)(lVar1 + 0x20))(), iVar2 != 0)) {
    iVar3 = (**(code **)(lVar1 + 0x20))();
    iVar2 = (**(code **)(lVar1 + 0x28))();
    if (iVar3 == 0) {
      iVar4 = 2;
    }
    else {
      iVar4 = (**(code **)(lVar1 + 0x28))(iVar2,0x15);
    }
    if (iVar4 < iVar2) {
      iVar2 = iVar4;
    }
    if (param_4 <= iVar2) {
      uVar6 = 0;
      uVar5 = (**(code **)(lVar1 + 0x30))(0,0x14);
      if (iVar3 != 0) {
        uVar6 = (**(code **)(lVar1 + 0x30))(0,0x15);
      }
      FUN_01684680(uVar6,uVar5,iVar3 != 0,param_1,param_1,param_2);
      pVar8 = (void*)uVar6;
      if ((local_68 == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      (**(code **)(lVar1 + 0x48))();
      if (iVar3 != 0) {
        (**(code **)(lVar1 + 0x48))();
      }
      if (local_70 != 0) {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
      }
      *this_ptr = local_70;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

