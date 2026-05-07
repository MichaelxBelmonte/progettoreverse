// Function: FUN_00b444a0
// Address: 00b444a0
// Size: 2083 bytes
// Class: GNDate
// String references:
//   "GNDate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b444a0(double param_1,int param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int in_ECX;
  ulong uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_58;
  longlong *local_50;
  int local_44;
  longlong *local_40;
  char local_38;
  
  uVar8 = SUB84(param_1,0);
  *(undefined8 *)(unaff_RDI + 0x78) = 0;
  lVar2 = DAT_027dc910;
  local_6c = param_3;
  local_68 = param_1;
  local_44 = param_2;
  if (*param_4 == 0) goto LAB_00b445f1;
  if (DAT_027dc910 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(uVar8,&local_100);
  plVar5 = local_40;
  if ((DAT_026d02f0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d0240 = FUN_00d4fe50();
    _DAT_026d0228 = "GNDate";
    _DAT_026d0230 = 0x18;
    _DAT_026d0238 = FUN_000378e0;
    _DAT_026d0248 = 0;
    uRam00000000026d0250 = 0;
    _DAT_026d0258 = 0;
    uRam00000000026d0260 = 0;
    _DAT_026d0268 = 0;
    uRam00000000026d0270 = 0;
    _DAT_026d0278 = 0;
    uRam00000000026d0280 = 0;
    _DAT_026d0288 = 0;
    uRam00000000026d0290 = 0;
    _DAT_026d0298 = 0;
    uRam00000000026d02a0 = 0;
    _DAT_026d02a8 = 0;
    uRam00000000026d02b0 = 0;
    _DAT_026d02b8 = 0;
    uRam00000000026d02c0 = 0;
    _DAT_026d02c8 = 0;
    uRam00000000026d02d0 = 0;
    _DAT_026d02d8 = 0;
    uRam00000000026d02e0 = 0;
    _DAT_026d02e8 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00b44556:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00b44556;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  plVar5 = *pplVar7;
  if (plVar1 != plVar5) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0x80) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x80);
        *(longlong **)(unaff_RDI + 0x80) = *pplVar7;
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
      *(longlong **)(unaff_RDI + 0x80) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
LAB_00b445f1:
  FUN_00bb9440();
  plVar5 = local_40;
  uVar8 = local_6c;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar5;
  FUN_00d46530();
  plVar5 = (longlong *)CONCAT44(uStack_5c,local_60);
  if (local_58 == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\0';
  local_40 = plVar5;
  cVar3 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02764880;
  if (cVar3 == '\0') {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar2;
    local_e8 = '\x01';
    FUN_00cc78b0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02764880;
  if (local_44 != 9) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar2;
    local_d8 = '\x01';
    FUN_00cc78b0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02764880;
  if (1 < in_ECX - 1U) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_00cc78b0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = *unaff_RSI;
  local_b8 = '\0';
  local_b0 = *param_4;
  local_a8 = '\0';
  FUN_00bba180(SUB84(local_68,0),local_44,uVar8,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  *(int *)(unaff_RDI + 0x90) = (int)(longlong)local_68;
  uVar6 = *(int *)(unaff_RDI + 0x34) - 0x40;
  if (uVar6 < 3) {
    *(short *)(unaff_RDI + 0xa0) = (short)uVar6 * 8 + 0x10;
  }
  FUN_00ae7f20();
  FUN_00c8e690();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  plVar1 = *(longlong **)(unaff_RDI + 0x60);
  if (plVar1 == plVar5) {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0x60) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  plVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  plVar1 = *(longlong **)(unaff_RDI + 0x68);
  if (plVar1 == plVar5) {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0x68) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = operator_new(uVar6);
  FUN_00c67e70();
  *(longlong **)(unaff_RDI + 0x78) = plVar5;
  *(undefined4 *)((longlong)plVar5 + 0x205c) = 0x1000;
  (**(code **)(*plVar5 + 0x20))();
  local_60 = FUN_00c6a340();
  FUN_00c8e690();
  plVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00c92170();
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  if (plVar1 == plVar5) {
    if (plVar5 != (longlong *)0x0) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0x98) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b20();
    }
  }
  FUN_00c6a360(uVar8,&local_60);
  FUN_00c8e690();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  uVar8 = ___bzero();
  local_a0 = plVar5;
  local_98 = '\0';
  uVar8 = FUN_00ccdbb0(uVar8,&local_a0);
  plVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (plVar5 != (longlong *)0x0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(uVar8,unaff_RDI + 0x40);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (local_40 != (longlong *)0x0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_00cc78b0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


