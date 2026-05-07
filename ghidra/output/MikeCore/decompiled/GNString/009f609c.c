// Function: FUN_009f609c
// Address: 009f609c
// Size: 527 bytes
// Class: GNString


ulonglong FUN_009f609c(void)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  locale *this;
  locale *plVar14;
  byte *unaff_RDI;
  char *pcVar15;
  byte bVar16;
  locale lVar17;
  ulonglong uVar18;
  byte local_48;
  locale local_47 [7];
  ulonglong local_40;
  locale *local_38;
  
  this = *(locale **)(unaff_RDI + 0x10);
  lVar3 = *(longlong *)(unaff_RDI + 0x20);
  pbVar1 = (byte *)(lVar3 - 1);
  *(byte **)(unaff_RDI + 0x20) = pbVar1;
  *(undefined8 *)this = 0;
  if ((pbVar1 < *(byte **)(unaff_RDI + 0x18)) || (9 < (byte)(*pbVar1 - 0x30))) {
    uVar18 = 0;
    goto LAB_009f6294;
  }
  plVar14 = (locale *)((ulonglong)*pbVar1 - 0x30);
  *(locale **)this = plVar14;
  *(longlong *)(unaff_RDI + 0x20) = lVar3 + -2;
  std::locale::locale(this);
  std::locale::classic();
  cVar9 = std::locale::operator==(this,plVar14);
  if (cVar9 == '\0') {
    plVar11 = (longlong *)std::locale::use_facet((id *)this);
    (**(code **)(*plVar11 + 0x28))();
    this = (locale *)CONCAT71((int7)((ulonglong)this >> 8),1);
    if ((local_48 & 1) == 0) {
      local_40 = (ulonglong)(local_48 >> 1);
    }
    if (local_40 == 0) {
LAB_009f6271:
      uVar10 = FUN_009b47bc();
      uVar18 = (ulonglong)uVar10;
    }
    else {
      this = local_47;
      if ((local_48 & 1) != 0) {
        this = local_38;
      }
      if ((char)*this < '\x01') goto LAB_009f6271;
      cVar9 = (**(code **)(*plVar11 + 0x20))();
      pcVar4 = *(char **)(unaff_RDI + 0x18);
      pcVar15 = *(char **)(unaff_RDI + 0x20);
      uVar18 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
      if (pcVar4 <= pcVar15) {
        plVar14 = local_47;
        if ((local_48 & 1) != 0) {
          plVar14 = local_38;
        }
        lVar17 = (locale)((char)*plVar14 + -1);
        bVar16 = 0;
        do {
          if (lVar17 != (locale)0x0) {
            bVar2 = *unaff_RDI;
            bVar5 = 0x1999999999999999 < *(ulonglong *)(unaff_RDI + 8);
            this = (locale *)CONCAT71(0x19999999999999,bVar5);
            *unaff_RDI = bVar2 | bVar5;
            uVar8 = *(ulonglong *)(unaff_RDI + 8) * 10;
            *(ulonglong *)(unaff_RDI + 8) = uVar8;
            if ((byte)(*pcVar15 - 0x30U) < 10) {
              uVar12 = (longlong)*pcVar15 - 0x30;
              if ((int)uVar12 == 0) {
                puVar13 = *(undefined8 **)(unaff_RDI + 0x10);
                this = (locale *)*puVar13;
LAB_009f6256:
                this = this + uVar8 * uVar12;
                *puVar13 = this;
                lVar17 = (locale)((char)lVar17 + -1);
                goto LAB_009f625f;
              }
              if ((bVar2 == 0 && !bVar5) &&
                 (auVar6._8_8_ = 0, auVar6._0_8_ = uVar12, auVar7._8_8_ = 0, auVar7._0_8_ = uVar8,
                 SUB168(auVar6 * auVar7,8) == 0)) {
                puVar13 = *(undefined8 **)(unaff_RDI + 0x10);
                this = (locale *)*puVar13;
                if (!CARRY8(uVar8 * uVar12,(ulonglong)this)) goto LAB_009f6256;
              }
            }
LAB_009f62a6:
            uVar18 = 0;
            break;
          }
          if (*pcVar15 != cVar9) goto LAB_009f6271;
          if (pcVar4 == pcVar15) goto LAB_009f62a6;
          bVar16 = bVar16 + ((ulonglong)bVar16 < local_40 - 1);
          this = local_47;
          if ((local_48 & 1) != 0) {
            this = local_38;
          }
          lVar17 = this[bVar16];
LAB_009f625f:
          pcVar15 = pcVar15 + -1;
          *(char **)(unaff_RDI + 0x20) = pcVar15;
        } while (pcVar4 <= pcVar15);
      }
    }
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    uVar10 = FUN_009b47bc();
    uVar18 = (ulonglong)uVar10;
  }
  std::locale::~locale(this);
LAB_009f6294:
  return uVar18 & 0xffffffff;
}


