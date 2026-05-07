// Function: FUN_0023f980
// Address: 0023f980
// Size: 1477 bytes
// Class: MDTestValuesController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0023f980(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong local_98;
  char local_90;
  uint local_84;
  ulonglong local_80;
  ulonglong local_78;
  char local_70;
  ulonglong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar6 = (longlong *)(param_2 & 0xffffffff);
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar4 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = DAT_026e1810;
    if (plVar4 != (longlong *)0x0) {
      local_84 = (uint)param_2;
      if (DAT_026e1810 != 0) {
        FUN_00d50b00();
      }
      local_80 = uVar5;
      FUN_00e7d6f0();
      uVar7 = FUN_0071a120();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (uVar7 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      local_58 = uVar5;
      local_50 = '\0';
      FUN_000175c0(uVar7,&local_58);
      plVar4 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar4;
        uVar1 = FUN_00c70bc0();
        uVar5 = (ulonglong)uVar1;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      plVar6 = (longlong *)(ulonglong)local_84;
      if ((plVar4 != (longlong *)0x0 & (byte)uVar5) == 0) {
        FUN_01caeae0();
        plVar6 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_01caeae0();
          plVar6 = *(longlong **)(unaff_RDI + 0x90);
          (**(code **)(&UNK_00001550 + *plVar6))();
          pcVar3 = local_38;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (longlong *)0x0) {
            plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023fef0:
            FUN_00d50b00();
          }
          else {
            plVar4 = local_48;
            if (local_38[0] == '\0') goto LAB_0023fef0;
          }
          (**(code **)(&UNK_000015d8 + *plVar4))();
          FUN_01d66ab0();
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar5 = 0;
        goto LAB_0023ff33;
      }
    }
  }
  if ((char)plVar6 != '\0') {
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar6))();
    plVar4 = local_48;
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    puVar2 = (ulonglong *)local_40;
    if (local_40[0] == '\0') {
      puVar2 = &local_58;
    }
    *(char *)puVar2 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023fc5b:
      FUN_00d50b00();
    }
    else if ((char)local_58 == '\0') goto LAB_0023fc5b;
    (**(code **)(&UNK_000015d8 + *plVar4))();
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar6 == (longlong *)0x0) {
LAB_0023fcf1:
      plVar4 = (longlong *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar6))();
      plVar4 = local_48;
      puVar2 = (ulonglong *)local_40;
      if (local_40[0] == '\0') {
        puVar2 = &local_58;
      }
      local_58 = CONCAT71(local_58._1_7_,local_40[0]);
      *(char *)puVar2 = '\0';
      if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (longlong *)0x0) {
        plVar4 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar4 == (longlong *)0x0) goto LAB_0023fcf1;
      }
      else if ((char)local_58 != '\0') goto LAB_0023fcf4;
      FUN_00d50b00();
    }
LAB_0023fcf4:
    FUN_019f1a10();
    if ((plVar6 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    plVar6 = local_48;
    uVar7 = FUN_00d46300();
    local_78 = local_58;
    local_70 = 0;
    local_98 = DAT_026f6e40;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        uVar7 = FUN_00d50b00();
        local_98 = DAT_026f6e40;
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    DAT_026f6e40 = local_98;
    if (local_98 != 0) {
      local_70 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar6 + 0x80))(uVar7,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar4 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  if (plVar4 == (longlong *)0x0) goto LAB_0023ff33;
  FUN_01caeae0();
  plVar6 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar6))();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023fea3:
    FUN_00d50b00();
  }
  else {
    plVar4 = local_48;
    if (local_38[0] == '\0') goto LAB_0023fea3;
  }
  (**(code **)(&UNK_000015d8 + *plVar4))();
  FUN_01d66ab0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_0023ff33:
  return uVar5 & 0xffffffff;
}


