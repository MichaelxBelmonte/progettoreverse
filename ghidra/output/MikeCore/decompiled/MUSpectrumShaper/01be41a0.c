// Function: FUN_01be41a0
// Address: 01be41a0
// Size: 2076 bytes
// Class: MUSpectrumShaper


void FUN_01be41a0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong *local_100;
  char local_f8;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  undefined8 uVar14;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar17 = (float)param_2;
  fVar13 = (float)((ulonglong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fVar16 = fVar17;
  fVar18 = fVar10;
  if (unaff_RDI[0x27] == 0) {
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
  }
  else {
    FUN_01bbfb40();
  }
  plVar2 = local_60;
  pcVar5 = local_38;
  if (local_58[0] != '\0') {
    pcVar5 = local_58;
  }
  local_38[0] = local_58[0];
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01be81a0();
  if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar14 = FUN_01e3f820();
  fVar15 = (float)((ulonglong)uVar14 >> 0x20);
  fVar8 = (float)uVar14;
  cVar3 = FUN_01bc0690();
  if (cVar3 == '\0') {
    (**(code **)(*local_60 + 0x978))();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(fVar8,fVar16);
  }
  else {
    (**(code **)(*local_60 + 0x9e0))();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(fVar8,fVar16);
  }
  (**(code **)(*local_60 + 0x988))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar17 = DAT_02390d00 + fVar17 + fVar7;
  (**(code **)(*local_60 + 0x368))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01be4501;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_01be4501:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar2;
    local_48 = 0xffffffff;
    local_40 = 0;
    fVar9 = DAT_02390d00 + fVar10 + fVar13;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          iVar6 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar6) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
      iVar6 = (**(code **)(*local_60 + 0x380))();
      if (iVar6 == 0) {
        plVar1 = (longlong *)*unaff_RSI;
        uVar11 = (**(code **)(*local_60 + 0x368))();
        uVar12 = (**(code **)(*local_60 + 0x368))();
        (**(code **)(*plVar1 + 0x3e0))(uVar11,fVar13,uVar12,fVar9);
      }
    }
    FUN_01a01420();
    FUN_00d50b20();
  }
  plVar1 = local_60;
  (**(code **)(*plVar2 + 0x990))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar2 + 0x368))(fVar7,fVar17);
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_01be47f2;
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) goto LAB_01be47f2;
  local_58[0] = '\0';
  local_60 = (longlong *)0x0;
  local_50 = plVar1;
  local_48 = 0xffffffff;
  local_40 = 0;
  fVar10 = fVar10 + fVar13 + DAT_02390d00;
  local_48._4_4_ = 0;
  while( true ) {
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar6 = -local_48._4_4_;
      }
      else {
        iVar6 = (int)local_48 - local_48._4_4_;
        local_48 = CONCAT44(local_48._4_4_,iVar6);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar6 = 0;
      }
      local_48 = CONCAT44(iVar6,(int)local_48);
    }
    lVar4 = (longlong)(int)local_48;
    iVar6 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar6);
    if (*(int *)((longlong)local_50 + 0xc) <= iVar6) break;
    local_60 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
    iVar6 = (**(code **)(*local_60 + 0x380))();
    if (iVar6 != 0) {
      plVar1 = (longlong *)*unaff_RSI;
      uVar11 = (**(code **)(*local_60 + 0x368))();
      uVar12 = (**(code **)(*local_60 + 0x368))();
      (**(code **)(*plVar1 + 0x3e0))(uVar11,fVar13,uVar12,fVar10);
    }
  }
  FUN_01a01420();
  FUN_00d50b20();
LAB_01be47f2:
  fVar13 = (float)FUN_01bf0370();
  if ((fVar7 <= fVar13) && (fVar13 <= fVar17)) {
    (**(code **)(*plVar2 + 0x938))();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_01d488d0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (fVar13,fVar15,fVar13,fVar15 + fVar18 + DAT_02390d00);
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_100 + 0x4b0))();
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  FUN_01d488d0();
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar18 = fVar15 + fVar18 + DAT_02390d00;
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar8,fVar18,fVar8 + fVar16 + DAT_02390d00,fVar18);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


