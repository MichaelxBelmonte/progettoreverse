// Function: FUN_00cba5e0
// Address: 00cba5e0
// Size: 957 bytes
// Class: GNEditingContextReadCopySyncObserver


/* WARNING: Removing unreachable block (ram,0x00cba6dd) */
/* WARNING: Removing unreachable block (ram,0x00cba6e9) */

void FUN_00cba5e0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  longlong local_e8;
  undefined1 local_e0;
  undefined8 *local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  undefined1 local_b0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined4 local_54;
  undefined8 *local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    local_54 = param_4;
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02587160;
    puVar2[6] = 0;
    *(undefined2 *)(puVar2 + 7) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    (*DAT_02587178)();
    local_88 = *param_2;
    local_80 = '\0';
    local_78 = *param_1;
    local_70 = '\0';
    plVar6 = &local_78;
    FUN_00e17b20(plVar6,&local_88);
    pVar5 = (pthread_key_t)plVar6;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e17bf0();
    FUN_00da5ad0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e17e00();
    if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e17c10();
    uVar7 = (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x368))();
    *(undefined1 *)(unaff_RDI + 0xe0) = 1;
    lVar1 = puVar2[6];
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar1;
    FUN_00cb93b0(uVar7,&local_e8);
    puVar3 = local_40;
    if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0256a258;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar7 = FUN_00d500e0();
      lVar1 = puVar2[6];
      local_d0 = 0;
      local_d8 = puVar3;
      if (lVar1 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_c0 = 1;
      local_c8 = lVar1;
      FUN_00cb9610(uVar7,&local_c8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = *(int *)((longlong)puVar3 + 0x1c) + 1;
    if (*(int *)(unaff_RDI + 0xac) == 0) {
      local_60 = '\0';
      local_68 = puVar2;
      FUN_00cbabc0();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = 0;
      local_b8 = puVar2;
      FUN_00cb9a00();
      if ((char)local_54 != '\0') {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8bda0();
      }
    }
    else {
      local_38 = '\0';
      local_40 = puVar2;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


