// Function: FUN_00d370b0
// Address: 00d370b0
// Size: 1058 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d370e1) */
/* WARNING: Removing unreachable block (ram,0x00d370ea) */
/* WARNING: Removing unreachable block (ram,0x00d373e4) */
/* WARNING: Removing unreachable block (ram,0x00d373fe) */
/* WARNING: Removing unreachable block (ram,0x00d37403) */
/* WARNING: Removing unreachable block (ram,0x00d3740b) */
/* WARNING: Removing unreachable block (ram,0x00d373ea) */
/* WARNING: Removing unreachable block (ram,0x00d37290) */
/* WARNING: Removing unreachable block (ram,0x00d3729d) */

void FUN_00d370b0(void *param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  void *local_40;
  char local_38;
  
  FUN_00d50cd0();
  cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  lVar4 = DAT_0277d7b8;
  if (cVar5 == '\0') {
    uVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x480))();
    *(undefined8 *)(unaff_RDI + 0x10) = uVar6;
    *(undefined1 *)(unaff_RDI + 0xc) = 1;
    uVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x480))();
    *(undefined8 *)(unaff_RDI + 0x18) = uVar6;
    *(undefined1 *)(unaff_RDI + 0xd) = 1;
    (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
    pvVar3 = *(void **)(unaff_RDI + 0x20);
    pvVar7 = pvVar3;
    if (pvVar3 == local_40) goto LAB_00d372d8;
    pvVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (void *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_00d37264;
      }
      FUN_00d50b00();
      pvVar3 = *(void **)(unaff_RDI + 0x20);
      *(void **)(unaff_RDI + 0x20) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00d37264:
      *(void **)(unaff_RDI + 0x20) = pvVar7;
    }
    if (pvVar3 != (void *)0x0) {
      FUN_00d50b20();
      pvVar7 = local_40;
    }
LAB_00d372d8:
    if ((local_38 != '\0') && (pvVar7 != (void *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
    pvVar3 = *(void **)(unaff_RDI + 0x28);
    if (pvVar3 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (void *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x28) = 0;
        }
        else {
          FUN_00d50b00();
          pvVar3 = *(void **)(unaff_RDI + 0x28);
          *(void **)(unaff_RDI + 0x28) = local_40;
        }
      }
      else {
        local_38 = '\0';
        *(void **)(unaff_RDI + 0x28) = local_40;
      }
      if (pvVar3 != (void *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (void *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar2 = (longlong *)*unaff_RSI;
  if (DAT_0277d7b8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x580))();
  if (local_38 == '\0') {
    if (local_40 != (void *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)((longlong)local_40 + 0x18);
  FUN_00c8e340();
  *(undefined1 *)(*(longlong *)((longlong)local_40 + 0x10) + (longlong)iVar1) = 0;
  iVar1 = *(int *)((longlong)local_40 + 0x18);
  uVar6 = FUN_00e83010();
  _memcpy(param_1,(void *)(longlong)iVar1,param_3);
  *(undefined8 *)(unaff_RDI + 0x10) = uVar6;
  *(undefined1 *)(unaff_RDI + 0xc) = 1;
  lVar4 = DAT_0277d7c0;
  plVar2 = (longlong *)*unaff_RSI;
  if (DAT_0277d7c0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x578))();
  pvVar3 = *(void **)(unaff_RDI + 0x20);
  pvVar7 = pvVar3;
  if (pvVar3 == local_40) goto LAB_00d37382;
  pvVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (void *)0x0) {
      pvVar7 = (void *)0x0;
      goto LAB_00d371f4;
    }
    FUN_00d50b00();
    param_1 = *(void **)(unaff_RDI + 0x20);
    *(void **)(unaff_RDI + 0x20) = local_40;
  }
  else {
    local_38 = '\0';
LAB_00d371f4:
    *(void **)(unaff_RDI + 0x20) = pvVar7;
    param_1 = pvVar3;
  }
  if (param_1 != (void *)0x0) {
    FUN_00d50b20();
    pvVar7 = local_40;
  }
LAB_00d37382:
  if ((local_38 != '\0') && (pvVar7 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_0277d7c8;
  plVar2 = (longlong *)*unaff_RSI;
  if (DAT_0277d7c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x580))();
  if ((local_38 != '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)((longlong)local_40 + 0x18);
  FUN_00c8e340();
  *(undefined1 *)(*(longlong *)((longlong)local_40 + 0x10) + (longlong)iVar1) = 0;
  iVar1 = *(int *)((longlong)local_40 + 0x18);
  FUN_00e83010();
  _memcpy(param_1,(void *)(longlong)iVar1,param_3);
  FUN_00d376b0();
  *(undefined1 *)(unaff_RDI + 0xd) = 1;
  FUN_00d50b20();
  return;
}


