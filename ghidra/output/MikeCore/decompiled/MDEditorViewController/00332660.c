// Function: FUN_00332660
// Address: 00332660
// Size: 999 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x003329a7) */
/* WARNING: Removing unreachable block (ram,0x003329b3) */
/* WARNING: Removing unreachable block (ram,0x00332a1c) */
/* WARNING: Removing unreachable block (ram,0x00332a28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00332660(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong **pplVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_b0;
  char local_a8;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(longlong *)(unaff_RDI + 0xa0) != 0) && (param_2 != '\0')) {
    FUN_003322a0();
    local_60 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e561b0();
    FUN_01d8b220();
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_70 = local_80;
    local_38[0] = '\0';
    local_68 = local_80;
    do {
      plVar6 = local_70;
      (**(code **)(*local_70 + 0x370))();
      plVar5 = local_48;
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          plVar5 = plVar6;
          goto LAB_00332777;
        }
      }
      else {
        local_70 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00332777:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
        plVar6 = plVar5;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_0270aa58 = FUN_00015ff0();
        _DAT_0270aa40 = "MDEditorViewController";
        _DAT_0270aa48 = 0x1e8;
        _DAT_0270aa50 = FUN_00074eb0;
        _DAT_0270aa60 = 0;
        uRam000000000270aa68 = 0;
        _DAT_0270aa70 = 0;
        _DAT_0270aae8 = 0;
        uRam000000000270aaf0 = 0;
        _DAT_0270aaf8 = 0;
        DAT_0270aafa = 1;
        _DAT_0270aa78 = 0;
        uRam000000000270aa80 = 0;
        _DAT_0270aa88 = 0;
        uRam000000000270aa90 = 0;
        _DAT_0270aa98 = 0;
        uRam000000000270aaa0 = 0;
        _DAT_0270aaa8 = 0;
        uRam000000000270aab0 = 0;
        _DAT_0270aab8 = 0;
        uRam000000000270aac0 = 0;
        _DAT_0270aac8 = 0;
        uRam000000000270aad0 = 0;
        _DAT_0270aad8 = 0;
        uRam000000000270aae0 = 0;
        DAT_0270ab03 = 0;
        _DAT_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar4 = &local_70;
        if (cVar1 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
      plVar6 = local_70;
      if (*pplVar4 != (longlong *)0x0) {
        if ((local_38[0] == '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        plVar5 = local_60;
        if (local_68 == (longlong *)0x0) goto LAB_0033290a;
        goto LAB_00332905;
      }
    } while (local_70 != (longlong *)0x0);
    plVar6 = (longlong *)0x0;
    plVar5 = local_60;
    if (local_68 != (longlong *)0x0) {
LAB_00332905:
      plVar5 = local_60;
      FUN_00d50b20();
    }
LAB_0033290a:
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_0021a630();
      local_58 = local_48;
      local_50 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_50 = '\x01';
      FUN_01a296f0(uVar7,0);
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar7 = FUN_01caeac0();
    FUN_01289850(uVar7,DAT_023b26e8);
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}


