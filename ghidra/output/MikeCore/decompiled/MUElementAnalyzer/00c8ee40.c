// Function: FUN_00c8ee40
// Address: 00c8ee40
// Size: 684 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x00c8f0d5) */
/* WARNING: Removing unreachable block (ram,0x00c8f0e2) */

void FUN_00c8ee40(void *param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  if (cVar3 == '\0') {
    iVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
    *(int *)(unaff_RDI + 0x20) = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
    FUN_00c8e340();
    (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
  }
  else {
    *(undefined1 *)(unaff_RDI + 0x1d) = 0;
    lVar2 = DAT_027815b0;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027815b0 != 0) {
      FUN_00d50b00();
    }
    uVar5 = (**(code **)(*plVar1 + 0x520))();
    *(undefined4 *)(unaff_RDI + 0x20) = uVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027815c8;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027815c8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027726e8;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027726e8 != 0) {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027648d0;
    if (iVar6 != 0) {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027648d0 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x580))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        iVar6 = *(int *)(local_48 + 0x18);
        FUN_00c8e340();
        _memcpy(param_1,(void *)(longlong)iVar6,param_3);
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 0x1c) = uVar4;
    lVar2 = DAT_027815b8;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027815b8 != 0) {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(unaff_RDI + 0x18);
  if ((*(int *)(unaff_RDI + 0x20) != 0) && (iVar6 == 1)) {
    FUN_00e7d230();
  }
  return;
}


