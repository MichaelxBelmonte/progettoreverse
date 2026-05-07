// Function: FUN_01b8db70
// Address: 01b8db70
// Size: 812 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"


/* WARNING: Removing unreachable block (ram,0x01b8dd21) */
/* WARNING: Removing unreachable block (ram,0x01b8dd2a) */
/* WARNING: Removing unreachable block (ram,0x01b8ddb1) */
/* WARNING: Removing unreachable block (ram,0x01b8ddba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8db70(undefined8 param_1,undefined4 param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_XMM1_Dc;
  longlong *local_48;
  char local_40;
  float local_34;
  
  pplVar6 = &local_48;
  FUN_01e40eb0();
  plVar2 = local_48;
  if ((DAT_02732250 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027321a0 = FUN_001b37d0();
    _DAT_02732188 = "MUDetectionActivationSlider";
    _DAT_02732190 = 0x1e8;
    _DAT_02732198 = FUN_008264b0;
    _DAT_027321a8 = 0;
    uRam00000000027321b0 = 0;
    _DAT_027321b8 = 0;
    _DAT_02732230 = 0;
    uRam0000000002732238 = 0;
    _DAT_02732240 = 0;
    DAT_02732242 = 1;
    _DAT_027321c0 = 0;
    uRam00000000027321c8 = 0;
    _DAT_027321d0 = 0;
    uRam00000000027321d8 = 0;
    _DAT_027321e0 = 0;
    uRam00000000027321e8 = 0;
    _DAT_027321f0 = 0;
    uRam00000000027321f8 = 0;
    _DAT_02732200 = 0;
    uRam0000000002732208 = 0;
    _DAT_02732210 = 0;
    uRam0000000002732218 = 0;
    _DAT_02732220 = 0;
    uRam0000000002732228 = 0;
    DAT_0273224b = 0;
    _DAT_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b8dbd3;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01b8dbd3:
  plVar2 = *pplVar6;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    local_34 = (float)(**(code **)(*unaff_RDI + 0xb10))();
    fVar1 = *(float *)((longlong)unaff_RDI + 0x1dc);
    fVar7 = (float)(**(code **)(*unaff_RDI + 0xac0))();
    fVar8 = (float)(**(code **)(*unaff_RDI + 0xad0))();
    fVar9 = (float)(**(code **)(*unaff_RDI + 0xac0))();
    cVar3 = (**(code **)(*unaff_RDI + 0xaf0))();
    if (cVar3 != '\0') {
      local_34 = DAT_02390124 - local_34;
    }
    (**(code **)(*unaff_RDI + 0x640))();
    plVar2 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01e3f820();
    uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    (**(code **)(*plVar2 + 0x3f0))(uVar10,0xe,0,uVar4);
    uVar10 = FUN_01e3f820();
    (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*unaff_RDI + 0xa70))();
    FUN_01cc0c20(uVar10,param_2,local_34,(fVar1 - fVar7) / (fVar8 - fVar9),param_2,in_XMM1_Dc);
    FUN_00d50b20();
  }
  return;
}


