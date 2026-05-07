// Function: FUN_017cc6c0
// Address: 017cc6c0
// Size: 758 bytes
// Class: GNString
// String references:
//   "%I"
//   "%@ (%I)"


void FUN_017cc6c0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  char local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  FUN_017cb7f0();
  plVar6 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_017cc703;
    FUN_00d50b00();
  }
  else if (local_68 == (longlong *)0x0) {
LAB_017cc703:
    FUN_017cb550();
    if ((local_68 != (longlong *)0x0) && (plVar6 = local_68, (char)local_60 == '\0')) {
      FUN_00d50b00();
    }
  }
  if (plVar6 == (longlong *)0x0) {
    local_58 = *(longlong **)(unaff_RSI + 0x40);
    local_60 = 1;
    param_1 = 0x24da828;
    local_68 = (longlong *)&DAT_024da828;
    FUN_00d8cb40(&DAT_024da828,&local_68);
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
            (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = *(longlong **)(unaff_RSI + 0x58);
  plVar7 = plVar6;
  if (plVar5 == (longlong *)0x0) goto LAB_017cc991;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar5 = *(longlong **)(unaff_RSI + 0x58);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  lVar3 = DAT_02725a40;
  if (DAT_02725a40 != 0) {
    FUN_00d50b00();
  }
  pplVar4 = &local_68;
  (**(code **)(*plVar5 + 0x88))();
  plVar5 = local_68;
  FUN_00053ac0();
  if (plVar5 == (longlong *)0x0) {
LAB_017cc7d6:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017cc7d6;
  }
  plVar5 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) goto LAB_017cc991;
  fVar8 = (float)FUN_00d459e0();
  FUN_00d50b20();
  if ((fVar8 == 0.0) && (!NAN(fVar8))) goto LAB_017cc991;
  local_60 = 2;
  local_68 = &DAT_024c5048;
  local_50 = 0;
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48 = (int)fVar8;
  local_50 = '\x01';
  local_68 = (longlong *)&DAT_025df2a0;
  local_58 = plVar6;
  FUN_00d8cb40(&DAT_025df2a0,&local_68);
  plVar7 = local_40;
  if (local_40 == plVar6) {
LAB_017cc965:
    plVar7 = plVar6;
    if (local_38 != '\0') {
LAB_017cc96b:
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar6 = plVar7;
        goto LAB_017cc965;
      }
      if (local_38 == '\0') goto LAB_017cc979;
      goto LAB_017cc96b;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_017cc979:
  local_68 = &DAT_024c5048;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_017cc991:
  *unaff_RDI = plVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


