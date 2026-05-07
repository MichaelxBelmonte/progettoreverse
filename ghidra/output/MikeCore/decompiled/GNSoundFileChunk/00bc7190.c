// Function: FUN_00bc7190
// Address: 00bc7190
// Size: 905 bytes
// Class: GNSoundFileChunk


void FUN_00bc7190(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  uVar6 = FUN_00e31390();
  bVar4 = -(uVar6 - unaff_ESI) < 0x80000001;
  if (unaff_ESI <= uVar6) {
    bVar4 = (int)(uVar6 - unaff_ESI) < 0;
  }
  if (bVar4) {
    return;
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (unaff_ESI < param_2) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        bVar4 = true;
        lVar9 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8);
          iVar7 = FUN_00e31390();
          if (iVar7 != 0) goto LAB_00bc750c;
          if ((bVar4) && ((*(byte *)(lVar2 + 0x10) & 8) != 0)) {
            cVar5 = FUN_00bc7570();
            if (cVar5 == '\0') {
              bVar4 = false;
            }
          }
          iVar7 = FUN_00e31390();
          if ((((iVar7 == 0) && (*(longlong *)(lVar2 + 0x18) != 0)) &&
              (uVar8 = FUN_00e31390(), unaff_ESI <= uVar8)) &&
             ((uVar8 < param_2 && (cVar5 = FUN_00e314a0(2,1), cVar5 != '\0')))) {
            lVar3 = *(longlong *)(lVar2 + 0x18);
            *(undefined8 *)(lVar2 + 0x18) = 0;
            *(undefined1 *)(lVar2 + 0xc) = 0;
            FUN_00e313d0();
            if (lVar3 != 0) {
              FUN_00e83070();
            }
          }
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar1 + 0xc)) {
      bVar4 = true;
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8);
        iVar7 = FUN_00e31390();
        if (iVar7 != 0) goto LAB_00bc750c;
        if ((bVar4) && ((*(byte *)(lVar2 + 0x10) & 8) != 0)) {
          cVar5 = FUN_00bc7570();
          if (cVar5 == '\0') {
            bVar4 = false;
          }
        }
        iVar7 = FUN_00e31390();
        if ((((iVar7 == 0) && (*(longlong *)(lVar2 + 0x18) != 0)) &&
            ((uVar8 = FUN_00e31390(), uVar8 < param_2 || (unaff_ESI <= uVar8)))) &&
           (cVar5 = FUN_00e314a0(2,1), cVar5 != '\0')) {
          lVar3 = *(longlong *)(lVar2 + 0x18);
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined1 *)(lVar2 + 0xc) = 0;
          FUN_00e313d0();
          if (lVar3 != 0) {
            FUN_00e83070();
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_00bcda50();
  }
  bVar4 = -(uVar6 - param_2) < 0x80000001;
  if (param_2 <= uVar6) {
    bVar4 = (int)(uVar6 - param_2) < 0;
  }
  if (bVar4) {
    FUN_00e314a0(0,unaff_ESI);
  }
joined_r0x00bc751b:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00bc750c:
  FUN_00bcda50();
  goto joined_r0x00bc751b;
}


