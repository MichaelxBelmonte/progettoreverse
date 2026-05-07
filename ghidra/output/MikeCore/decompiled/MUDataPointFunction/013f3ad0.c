// Function: FUN_013f3ad0
// Address: 013f3ad0
// Size: 1610 bytes
// Class: MUDataPointFunction


void FUN_013f3ad0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *in_RCX;
  longlong *plVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong *local_60;
  longlong local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  local_40 = (longlong *)CONCAT44(local_40._4_4_,(int)in_RCX);
  if (*(int *)(unaff_RDI[9] + 0xc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x013f3b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x3e0))(0,0);
    return;
  }
  if (*unaff_RSI == 0) {
    param_1 = FUN_00d23310();
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3be4;
      }
      in_RCX = unaff_RSI + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_60 = 1;
  }
LAB_013f3be4:
  if (*param_2 == 0) {
    param_1 = FUN_00d23340();
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3cb4;
      }
      in_RCX = param_2 + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_60 = 1;
  }
LAB_013f3cb4:
  if ((char)local_40 != '\0') {
    local_80 = *unaff_RSI;
    local_78 = 0;
    uVar8 = FUN_013f37e0(param_1,&local_80);
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] == '\0') && (local_50 != 0)) {
        in_RCX = unaff_RSI + 1;
        local_40 = in_RCX;
        if (local_48[0] == '\0') {
          uVar8 = FUN_00d50b00();
        }
        goto LAB_013f3d62;
      }
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_40 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          uVar8 = FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
LAB_013f3d62:
      *(undefined1 *)local_40 = 1;
    }
    local_70 = *param_2;
    local_68 = 0;
    FUN_013f38b0(uVar8,&local_70);
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3e10;
      }
      in_RCX = param_2 + 1;
      local_40 = in_RCX;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_40 = 1;
  }
LAB_013f3e10:
  if (*unaff_RSI == 0) {
    FUN_00d23310();
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3f2f;
      }
      in_RCX = unaff_RSI + 1;
      local_40 = in_RCX;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_40 = 1;
  }
LAB_013f3f2f:
  pVar4 = (pthread_key_t)in_RCX;
  if (*param_2 == 0) {
    FUN_00d23340();
    plVar5 = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (pthread_key_t)plVar5;
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3fff;
      }
      plVar5 = param_2 + 1;
      local_40 = plVar5;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pVar4 = (pthread_key_t)plVar5;
    *(undefined1 *)local_40 = 1;
  }
LAB_013f3fff:
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (longlong *)FUN_013faed0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_013faed0();
  (**(code **)(*unaff_RDI + 0x3e0))(local_40,uVar7);
  return;
}


