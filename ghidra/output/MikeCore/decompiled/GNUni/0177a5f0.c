// Function: FUN_0177a5f0
// Address: 0177a5f0
// Size: 1450 bytes
// Class: GNUni


void FUN_0177a5f0(undefined4 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  float local_ac;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_c0 = 0;
  if (*param_2 == 0) goto LAB_0177aad3;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (longlong)&DAT_02576110;
  *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1a) = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  (*DAT_02576128)();
  local_e0 = DAT_02704060;
  local_a8 = param_2;
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  uVar8 = FUN_00d91000(1,&local_e0);
  plVar2 = local_48;
  plVar6 = local_a8;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (uVar8 = FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  local_70 = plVar2;
  if (*(int *)((longlong)plVar2 + 0xc) == 2) {
    uVar8 = FUN_00d23310();
    plVar6 = local_48;
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_98 = 0;
    if ((local_38[0] == '\0') && (plVar6 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b00();
    }
    local_a0 = plVar6;
    local_98 = '\x01';
    (**(code **)(*plVar4 + 0x390))(uVar8,&local_a0);
    local_ac = (float)FUN_00d459e0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = FUN_00d23340();
    plVar6 = local_48;
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_88 = 0;
    if ((local_38[0] == '\0') && (plVar6 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b00();
    }
    local_90 = plVar6;
    local_88 = '\x01';
    (**(code **)(*plVar4 + 0x390))(uVar8,&local_90);
    plVar6 = local_a8;
    local_68._0_4_ = (float)FUN_00d459e0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = 0;
    if ((float)local_68 <= 0.0) goto LAB_0177a906;
    local_68 = _logf(local_ac / (float)local_68);
    fVar9 = (float)FUN_00d48af0();
    local_68._0_4_ =
         (float)(-(uint)!NAN((float)local_68 * DAT_02394208) &
                (uint)((float)local_68 * DAT_02394208));
    if ((float)local_68 < fVar9) {
      local_68 = FUN_00d48af0();
    }
    fVar10 = (float)FUN_00d48b10();
    fVar9 = (float)local_68;
    if (fVar10 < (float)local_68) {
      fVar9 = (float)FUN_00d48b10();
    }
    FUN_00d46dc0(fVar9);
    plVar4 = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        goto LAB_0177a8f4;
      }
      FUN_00d50b00();
      *unaff_RDI = plVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar1 = true;
    }
    else {
LAB_0177a8f4:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar1 = true;
    }
  }
  else {
LAB_0177a906:
    local_d0 = *plVar6;
    local_c8 = '\0';
    pplVar7 = &local_48;
    (**(code **)(*plVar4 + 0x390))(uVar8,&local_d0);
    plVar4 = local_48;
    FUN_00053ac0();
    if (plVar4 == (longlong *)0x0) {
LAB_0177a95e:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0177a95e;
    }
    plVar4 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      fVar9 = (float)FUN_00d459e0();
      bVar1 = false;
      local_68 = CONCAT44(local_68._4_4_,(float)local_68);
      if ((fVar9 < DAT_023908e0) &&
         ((fVar9 != 0.0 || (local_68 = CONCAT44(local_68._4_4_,(float)local_68), NAN(fVar9))))) {
        local_68 = _logf();
        fVar9 = (float)FUN_00d48af0();
        local_68._0_4_ =
             (float)(-(uint)!NAN((float)local_68 * DAT_02394208) &
                    (uint)((float)local_68 * DAT_02394208));
        if ((float)local_68 < fVar9) {
          local_68 = FUN_00d48af0();
        }
        fVar10 = (float)FUN_00d48b10();
        fVar9 = (float)local_68;
        if (fVar10 < (float)local_68) {
          fVar9 = (float)FUN_00d48b10();
        }
        FUN_00d46dc0(fVar9);
        plVar4 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            goto LAB_0177aa9c;
          }
          FUN_00d50b00();
          *unaff_RDI = plVar4;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
LAB_0177aa9c:
          *unaff_RDI = local_48;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        bVar1 = true;
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  param_1 = FUN_00d50b20();
  if (bVar1) {
    return;
  }
  local_c0 = *local_a8;
LAB_0177aad3:
  local_b8 = '\0';
  FUN_00d4bda0(param_1,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


