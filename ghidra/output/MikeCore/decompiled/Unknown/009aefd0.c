// Function: FUN_009aefd0
// Address: 009aefd0
// Size: 506 bytes
// Class: Unknown


ulonglong FUN_009aefd0(void)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  locale *plVar9;
  uint *puVar10;
  uint uVar11;
  locale *this;
  uint uVar12;
  byte *unaff_RDI;
  char *pcVar13;
  byte bVar14;
  locale lVar15;
  ulonglong uVar16;
  byte local_48;
  locale local_47 [7];
  ulonglong local_40;
  locale *local_38;
  
  this = *(locale **)(unaff_RDI + 8);
  lVar3 = *(longlong *)(unaff_RDI + 0x18);
  pbVar1 = (byte *)(lVar3 - 1);
  *(byte **)(unaff_RDI + 0x18) = pbVar1;
  *(undefined4 *)this = 0;
  if ((pbVar1 < *(byte **)(unaff_RDI + 0x10)) || (9 < (byte)(*pbVar1 - 0x30))) {
    uVar16 = 0;
    goto LAB_009af1b3;
  }
  uVar12 = *pbVar1 - 0x30;
  plVar9 = (locale *)(ulonglong)uVar12;
  *(uint *)this = uVar12;
  *(longlong *)(unaff_RDI + 0x18) = lVar3 + -2;
  std::locale::locale(this);
  std::locale::classic();
  cVar6 = std::locale::operator==(this,plVar9);
  if (cVar6 == '\0') {
    plVar8 = (longlong *)std::locale::use_facet((id *)this);
    (**(code **)(*plVar8 + 0x28))();
    this = (locale *)CONCAT71((int7)((ulonglong)this >> 8),1);
    if ((local_48 & 1) == 0) {
      local_40 = (ulonglong)(local_48 >> 1);
    }
    if (local_40 == 0) {
LAB_009af190:
      uVar12 = FUN_009af1f8();
      uVar16 = (ulonglong)uVar12;
    }
    else {
      this = local_47;
      if ((local_48 & 1) != 0) {
        this = local_38;
      }
      if ((char)*this < '\x01') goto LAB_009af190;
      cVar6 = (**(code **)(*plVar8 + 0x20))();
      pcVar4 = *(char **)(unaff_RDI + 0x10);
      pcVar13 = *(char **)(unaff_RDI + 0x18);
      uVar16 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      if (pcVar4 <= pcVar13) {
        plVar9 = local_47;
        if ((local_48 & 1) != 0) {
          plVar9 = local_38;
        }
        lVar15 = (locale)((char)*plVar9 + -1);
        bVar14 = 0;
        do {
          if (lVar15 != (locale)0x0) {
            bVar2 = *unaff_RDI;
            bVar5 = 0x19999999 < *(uint *)(unaff_RDI + 4);
            this = (locale *)CONCAT71((int7)((ulonglong)this >> 8),bVar5);
            *unaff_RDI = bVar2 | bVar5;
            uVar12 = *(uint *)(unaff_RDI + 4) * 10;
            *(uint *)(unaff_RDI + 4) = uVar12;
            if ((byte)(*pcVar13 - 0x30U) < 10) {
              uVar7 = (int)*pcVar13 - 0x30;
              if (uVar7 == 0) {
                puVar10 = *(uint **)(unaff_RDI + 8);
                uVar11 = *puVar10;
LAB_009af176:
                uVar11 = uVar11 + uVar7 * uVar12;
                this = (locale *)(ulonglong)uVar11;
                *puVar10 = uVar11;
                lVar15 = (locale)((char)lVar15 + -1);
                goto LAB_009af17e;
              }
              if ((bVar2 == 0 && !bVar5) &&
                 ((int)((ulonglong)uVar7 * (ulonglong)uVar12 >> 0x20) == 0)) {
                puVar10 = *(uint **)(unaff_RDI + 8);
                uVar11 = *puVar10;
                this = (locale *)(ulonglong)uVar11;
                if (!CARRY4(uVar7 * uVar12,uVar11)) goto LAB_009af176;
              }
            }
LAB_009af1c5:
            uVar16 = 0;
            break;
          }
          if (*pcVar13 != cVar6) goto LAB_009af190;
          if (pcVar4 == pcVar13) goto LAB_009af1c5;
          bVar14 = bVar14 + ((ulonglong)bVar14 < local_40 - 1);
          this = local_47;
          if ((local_48 & 1) != 0) {
            this = local_38;
          }
          lVar15 = this[bVar14];
LAB_009af17e:
          pcVar13 = pcVar13 + -1;
          *(char **)(unaff_RDI + 0x18) = pcVar13;
        } while (pcVar4 <= pcVar13);
      }
    }
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    uVar12 = FUN_009af1f8();
    uVar16 = (ulonglong)uVar12;
  }
  std::locale::~locale(this);
LAB_009af1b3:
  return uVar16 & 0xffffffff;
}


