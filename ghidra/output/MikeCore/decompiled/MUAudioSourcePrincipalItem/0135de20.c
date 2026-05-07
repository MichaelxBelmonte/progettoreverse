// Function: FUN_0135de20
// Address: 0135de20
// Size: 1178 bytes
// Class: MUAudioSourcePrincipalItem


ulonglong FUN_0135de20(undefined8 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  char local_50;
  undefined8 *local_48;
  char local_40;
  char local_31;
  
  local_48 = (undefined8 *)*unaff_RSI;
  local_40 = '\0';
  uVar2 = FUN_00d23d70();
  uVar9 = (ulonglong)uVar2;
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_31 = (char)uVar2;
  if (local_31 == '\0') goto LAB_0135e071;
  FUN_01329970();
  FUN_01329030();
  local_48 = (undefined8 *)*unaff_RSI;
  local_40 = '\0';
  cVar1 = FUN_00d24090();
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_0134ad30();
  }
  local_48 = (undefined8 *)*unaff_RSI;
  local_40 = '\0';
  uVar2 = FUN_00d24090();
  puVar8 = (undefined8 *)(ulonglong)uVar2;
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar2 == '\0') {
    FUN_0134b100();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (puVar8 = *(undefined8 **)(unaff_RDI + 0x148), puVar8 != (undefined8 *)0x0)) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      puVar8 = *(undefined8 **)(unaff_RDI + 0x148);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)puVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0135dfa8;
    if (param_2 != '\0') {
      local_68 = *unaff_RSI;
      local_60 = '\0';
      FUN_0135dd30();
      puVar8 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_70 = 1;
      pVar7 = 1;
      FUN_01355320(1,local_78,0);
      if (puVar4 == local_48) {
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar4 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
LAB_0135dfa8:
    FUN_0135e480();
    if (puVar4 == local_48) {
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      puVar4 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if (*(int *)((longlong)puVar4 + 0xc) == 0) {
      FUN_0135e940();
      puVar8 = local_48;
      if (local_48 == puVar4) {
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar4 = puVar8;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
    }
  }
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (puVar8 = *(undefined8 **)(unaff_RDI + 0x148), puVar8 != (undefined8 *)0x0)) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      puVar8 = *(undefined8 **)(unaff_RDI + 0x148);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)puVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0135e035;
LAB_0135e041:
    uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),local_31);
    if (*(int *)((longlong)puVar4 + 0xc) != 0) {
      FUN_013357a0();
    }
  }
  else {
LAB_0135e035:
    cVar1 = FUN_01334f30();
    if (cVar1 != '\0') goto LAB_0135e041;
    uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),local_31);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0135e071;
  }
  FUN_00d50b20();
LAB_0135e071:
  return uVar9 & 0xffffffff;
}


