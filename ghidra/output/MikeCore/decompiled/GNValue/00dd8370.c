// Function: FUN_00dd8370
// Address: 00dd8370
// Size: 614 bytes
// Class: GNValue


ulonglong FUN_00dd8370(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *unaff_RDI;
  ulonglong uVar12;
  
  if ((*unaff_RDI == 0) || (iVar10 = FUN_00d8c7a0(), iVar10 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    cVar9 = FUN_00d8ca70();
    lVar2 = DAT_02784098;
    if (cVar9 == '(') {
      lVar1 = *unaff_RDI;
      if (DAT_02784098 != 0) {
        FUN_00d50b00();
      }
      cVar9 = FUN_00d90870();
      lVar3 = DAT_027840a0;
      uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (cVar9 == '\0') {
        lVar1 = *unaff_RDI;
        if (DAT_027840a0 != 0) {
          FUN_00d50b00();
        }
        cVar9 = FUN_00d90870();
        lVar4 = DAT_027840a8;
        uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        if (cVar9 == '\0') {
          lVar1 = *unaff_RDI;
          if (DAT_027840a8 != 0) {
            FUN_00d50b00();
          }
          cVar9 = FUN_00d90870();
          lVar5 = DAT_027840b0;
          uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
          if (cVar9 == '\0') {
            lVar1 = *unaff_RDI;
            if (DAT_027840b0 != 0) {
              FUN_00d50b00();
            }
            cVar9 = FUN_00d90870();
            lVar6 = DAT_027840b8;
            uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
            if (cVar9 == '\0') {
              lVar1 = *unaff_RDI;
              if (DAT_027840b8 != 0) {
                FUN_00d50b00();
              }
              cVar9 = FUN_00d90870();
              lVar7 = DAT_027840c0;
              uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
              if (cVar9 == '\0') {
                lVar1 = *unaff_RDI;
                if (DAT_027840c0 != 0) {
                  FUN_00d50b00();
                }
                cVar9 = FUN_00d90870();
                lVar8 = DAT_027840c8;
                uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
                if (cVar9 == '\0') {
                  if (DAT_027840c8 != 0) {
                    FUN_00d50b00();
                  }
                  uVar11 = FUN_00d90870();
                  uVar12 = (ulonglong)uVar11;
                  if (lVar8 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (lVar7 != 0) {
                  FUN_00d50b20();
                }
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar12 & 0xffffffff;
}


