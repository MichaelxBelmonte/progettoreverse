// Function: FUN_012b6e60
// Address: 012b6e60
// Size: 548 bytes
// Class: MULSSComponentRenderer


/* WARNING: Removing unreachable block (ram,0x012b705f) */
/* WARNING: Removing unreachable block (ram,0x012b7068) */
/* WARNING: Removing unreachable block (ram,0x012b7030) */
/* WARNING: Removing unreachable block (ram,0x012b7039) */

void FUN_012b6e60(pthread_key_t param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar7;
  double dVar8;
  byte local_res10;
  char local_res18;
  longlong local_60;
  char local_58;
  
  plVar6 = (longlong *)*unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  iVar2 = (**(code **)(*plVar6 + 0x3a0))();
  if (iVar2 < param_3) {
    plVar6 = (longlong *)*unaff_RSI;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = (longlong *)*unaff_RSI;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    param_3 = (**(code **)(*plVar6 + 0x3a0))();
  }
  iVar2 = FUN_00b33120();
  if (iVar2 < param_3) {
    param_3 = FUN_00b33120();
  }
  pVar5 = 1;
  if (local_res18 == '\0') {
    pVar5 = (uint)local_res10 * 2;
  }
  plVar6 = (longlong *)*unaff_RSI;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar8 = DAT_0238fee8 / (double)param_2;
  (**(code **)(*unaff_RDI + 0x420))();
  uVar7 = (**(code **)(*unaff_RDI + 0x5f8))();
  cVar1 = (**(code **)(*plVar6 + 0x388))(dVar8,uVar7,param_3,param_4);
  if (cVar1 == '\0') {
    (**(code **)(*unaff_RDI + 0x5d0))();
    if (local_58 == '\0') {
      if (local_60 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
      return;
    }
    FUN_012dc360();
    FUN_00d50b20();
  }
  return;
}


