// Function: FUN_0199e390
// Address: 0199e390
// Size: 1394 bytes
// Class: GNToolBoxTool


/* WARNING: Removing unreachable block (ram,0x0199e655) */
/* WARNING: Removing unreachable block (ram,0x0199e661) */
/* WARNING: Removing unreachable block (ram,0x0199e724) */
/* WARNING: Removing unreachable block (ram,0x0199e7a0) */
/* WARNING: Removing unreachable block (ram,0x0199e7ab) */
/* WARNING: Removing unreachable block (ram,0x0199e739) */
/* WARNING: Removing unreachable block (ram,0x0199e73d) */
/* WARNING: Removing unreachable block (ram,0x0199e745) */
/* WARNING: Removing unreachable block (ram,0x0199e8f7) */
/* WARNING: Removing unreachable block (ram,0x0199e907) */
/* WARNING: Removing unreachable block (ram,0x0199e7ec) */
/* WARNING: Removing unreachable block (ram,0x0199e7e3) */
/* WARNING: Removing unreachable block (ram,0x0199e6c5) */
/* WARNING: Removing unreachable block (ram,0x0199e6ca) */
/* WARNING: Removing unreachable block (ram,0x0199e616) */
/* WARNING: Removing unreachable block (ram,0x0199e61f) */
/* WARNING: Removing unreachable block (ram,0x0199e830) */
/* WARNING: Removing unreachable block (ram,0x0199e763) */
/* WARNING: Removing unreachable block (ram,0x0199e827) */
/* WARNING: Removing unreachable block (ram,0x0199e784) */
/* WARNING: Removing unreachable block (ram,0x0199e78d) */
/* WARNING: Removing unreachable block (ram,0x0199e85d) */
/* WARNING: Removing unreachable block (ram,0x0199e866) */
/* WARNING: Removing unreachable block (ram,0x0199e87a) */
/* WARNING: Removing unreachable block (ram,0x0199e883) */

void FUN_0199e390(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar8;
  undefined8 uVar9;
  longlong local_b0;
  char local_a8;
  longlong local_78;
  double local_58;
  undefined8 local_50;
  double local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (unaff_RDI[0x94] != 0) goto LAB_0199e8ba;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  lVar1 = unaff_RDI[0x94];
  unaff_RDI[0x94] = (longlong)puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*pcVar2)();
  lVar1 = unaff_RDI[0x95];
  unaff_RDI[0x95] = (longlong)puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*unaff_RSI == 0) {
    local_78 = unaff_RDI[0x41];
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    fVar8 = (float)(**(code **)(*unaff_RDI + 0xc00))((int)((ulonglong)uVar9 >> 0x20));
    local_58 = (double)fVar8;
    local_50 = (**(code **)(*unaff_RDI + 0x930))((int)uVar9);
    fVar8 = (float)(**(code **)(*unaff_RDI + 3000))();
    local_48 = (double)(**(code **)(*unaff_RDI + 0x928))();
    local_48 = (double)fVar8 / local_48;
    FUN_004f2260(&local_58,FUN_019bfe10);
    local_78 = local_b0;
    if (local_a8 == '\0') {
      if (local_b0 == 0) {
        local_78 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*pcVar2)();
  if (local_78 == 0) {
LAB_0199e8a3:
    FUN_00d50b20();
  }
  else {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar7 = 0;
      do {
        uVar6 = (ulonglong)uVar7;
        lVar1 = *(longlong *)(*(longlong *)(local_78 + 0x10) + uVar6 * 8);
        FUN_00d216c0();
        FUN_00d21140();
        cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                            *unaff_RDI + 8))();
        if (cVar3 != '\0') {
          while( true ) {
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (lVar1 == 0) break;
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
          }
          cVar3 = FUN_00d24090();
          if (cVar3 == '\0') {
            FUN_00d21140();
            FUN_00d21140();
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    if (puVar4 != (undefined8 *)0x0) goto LAB_0199e8a3;
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
LAB_0199e8ba:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


