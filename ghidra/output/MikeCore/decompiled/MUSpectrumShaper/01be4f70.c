// Function: FUN_01be4f70
// Address: 01be4f70
// Size: 1219 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01be536b) */
/* WARNING: Removing unreachable block (ram,0x01be5377) */

void FUN_01be4f70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined8 in_XMM1_Qb;
  undefined1 local_b8 [16];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  plVar1 = local_70;
  if (unaff_RDI[0x27] == 0) {
LAB_01be500f:
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar4 = *(int *)((longlong)local_70 + 0xc);
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar4 == 0) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      FUN_00d23340();
      local_38[0] = (char)local_68;
      pplVar3 = &local_68;
      if ((char)local_68 == '\0') {
        pplVar3 = (longlong **)local_38;
      }
      *(char *)pplVar3 = '\0';
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_70 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    return;
  }
  FUN_01bbfb40();
  if ((char)local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01be500f;
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01be500f;
  (**(code **)(*unaff_RDI + 0x4a0))();
  plVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01dcb110();
  if ((char)local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  local_b8._8_8_ = in_XMM1_Qb;
  local_b8._0_8_ = param_2;
  FUN_01bc09c0();
  if ((char)local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01be53bb;
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01be53bb;
  local_68._0_1_ = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar1;
  local_58 = 0xffffffff;
  local_50 = 0;
  blendps(local_b8,ZEXT816(0),0xd);
  local_58._4_4_ = 0;
  while( true ) {
    if (local_58._4_4_ != 0) {
      if (local_58._4_4_ < 1) {
        iVar4 = -local_58._4_4_;
      }
      else {
        iVar4 = (int)local_58 - local_58._4_4_;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        FUN_00d23690();
        local_50 = local_50 + local_58._4_4_;
        iVar4 = 0;
      }
      local_58 = CONCAT44(iVar4,(int)local_58);
    }
    lVar2 = (longlong)(int)local_58;
    iVar4 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,iVar4);
    if (*(int *)((longlong)local_60 + 0xc) <= iVar4) break;
    local_70 = *(longlong **)(local_60[2] + 8 + lVar2 * 8);
    FUN_01bc5e00();
    plVar5 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bc5f50();
    if (plVar5 == (longlong *)0x0) {
      FUN_01bc6250();
      if (((local_48 != (longlong *)0x0) && (plVar5 = local_48, local_40 == '\0')) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x4d0))(0);
    }
    local_40 = '\0';
    local_48 = plVar5;
    iVar4 = FUN_00d237a0();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar4 < 0) {
      (**(code **)(*unaff_RDI + 0x450))();
    }
    else {
      FUN_00d23620();
    }
    FUN_01bca0c0();
    FUN_01bc6fd0();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_000840d0();
  FUN_00d50b20();
LAB_01be53bb:
  while (*(int *)((longlong)plVar1 + 0xc) != 0) {
    FUN_00d23340();
    local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_68);
    pplVar3 = &local_68;
    if ((char)local_68 == '\0') {
      pplVar3 = &local_48;
    }
    *(undefined1 *)pplVar3 = 0;
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_70 + 0x478))();
    if ((char)local_48 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


