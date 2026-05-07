// Function: FUN_01c31df0
// Address: 01c31df0
// Size: 927 bytes
// Class: GNCoord


/* WARNING: Removing unreachable block (ram,0x01c31eb2) */
/* WARNING: Removing unreachable block (ram,0x01c31ebb) */
/* WARNING: Removing unreachable block (ram,0x01c32033) */
/* WARNING: Removing unreachable block (ram,0x01c32040) */

void FUN_01c31df0(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  if (*(float *)(unaff_RDI + 0x74) <= 0.0) {
    *(undefined4 *)(unaff_RDI + 0x74) = 0x3f800000;
  }
  if (*(float *)(unaff_RDI + 0x70) <= 0.0) {
    *(undefined4 *)(unaff_RDI + 0x70) = 0x3f800000;
  }
  FUN_01d4e800(*(undefined8 *)(unaff_RDI + 0x70));
  plVar1 = *(longlong **)(unaff_RDI + 0x68);
  plVar5 = plVar1;
  if (plVar1 == local_40) goto LAB_01c31e9c;
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_01c31e5a;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x68);
    *(longlong **)(unaff_RDI + 0x68) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01c31e5a:
    *(longlong **)(unaff_RDI + 0x68) = plVar5;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar5 = local_40;
  }
LAB_01c31e9c:
  if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x60);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00b810f0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    uVar2 = FUN_00e7d780(*(undefined4 *)(unaff_RDI + 0x70));
    lVar4 = FUN_00e83020();
    dVar8 = (double)FUN_00b7a6e0();
    uVar3 = FUN_00e7d850(dVar8 * DAT_0241c3f0);
    if ((int)uVar3 < (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_00b86d20(DAT_0241c3f0,0,uVar2);
    FUN_01d52740();
    FUN_01d480c0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01d48b40(DAT_02390124);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01cfc6a0(DAT_0239011c);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_01d488d0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar2) {
      fVar9 = *(float *)(unaff_RDI + 0x74) * DAT_0239011c;
      fVar7 = DAT_0239011c * fVar9;
      uVar6 = 0;
      do {
        FUN_01d52740();
        fVar10 = *(float *)(lVar4 + uVar6 * 4) * fVar7;
        (**(code **)(*local_40 + 0x3e0))
                  ((float)(int)uVar6,fVar9 + fVar10,(float)(int)uVar6,fVar9 - fVar10);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_01d52740();
    FUN_01d481c0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e83070();
    FUN_00d50b20();
  }
  return;
}


