// Function: FUN_009f5d18
// Address: 009f5d18
// Size: 517 bytes
// Class: Unknown


ulonglong FUN_009f5d18(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  locale *plVar10;
  ushort *puVar11;
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
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
  pbVar1 = (byte *)(lVar4 - 1);
  *(byte **)(unaff_RDI + 0x18) = pbVar1;
  *(undefined2 *)this = 0;
  if ((pbVar1 < *(byte **)(unaff_RDI + 0x10)) || (9 < (byte)(*pbVar1 - 0x30))) {
    uVar16 = 0;
    goto LAB_009f5f06;
  }
  uVar12 = *pbVar1 - 0x30;
  plVar10 = (locale *)(ulonglong)uVar12;
  *(short *)this = (short)uVar12;
  *(longlong *)(unaff_RDI + 0x18) = lVar4 + -2;
  std::locale::locale(this);
  std::locale::classic();
  cVar7 = std::locale::operator==(this,plVar10);
  if (cVar7 == '\0') {
    plVar9 = (longlong *)std::locale::use_facet((id *)this);
    (**(code **)(*plVar9 + 0x28))();
    this = (locale *)CONCAT71((int7)((ulonglong)this >> 8),1);
    if ((local_48 & 1) == 0) {
      local_40 = (ulonglong)(local_48 >> 1);
    }
    if (local_40 == 0) {
LAB_009f5ee3:
      uVar12 = FUN_009f5f4c();
      uVar16 = (ulonglong)uVar12;
    }
    else {
      this = local_47;
      if ((local_48 & 1) != 0) {
        this = local_38;
      }
      if ((char)*this < '\x01') goto LAB_009f5ee3;
      cVar7 = (**(code **)(*plVar9 + 0x20))();
      pcVar5 = *(char **)(unaff_RDI + 0x10);
      pcVar13 = *(char **)(unaff_RDI + 0x18);
      uVar16 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
      if (pcVar5 <= pcVar13) {
        plVar10 = local_47;
        if ((local_48 & 1) != 0) {
          plVar10 = local_38;
        }
        lVar15 = (locale)((char)*plVar10 + -1);
        bVar14 = 0;
        do {
          if (lVar15 != (locale)0x0) {
            bVar2 = *unaff_RDI;
            uVar3 = *(ushort *)(unaff_RDI + 2);
            bVar6 = 0x1999 < uVar3;
            this = (locale *)CONCAT71((int7)((ulonglong)this >> 8),bVar6);
            *unaff_RDI = bVar2 | bVar6;
            uVar12 = ((uint)uVar3 + (uint)uVar3) * 5;
            *(short *)(unaff_RDI + 2) = (short)uVar12;
            if ((byte)(*pcVar13 - 0x30U) < 10) {
              uVar8 = (int)*pcVar13 - 0x30;
              if ((short)uVar8 == 0) {
                puVar11 = *(ushort **)(unaff_RDI + 8);
                uVar3 = *puVar11;
LAB_009f5ec8:
                uVar12 = (uint)uVar3 + uVar8 * uVar12;
                this = (locale *)(ulonglong)uVar12;
                *puVar11 = (ushort)uVar12;
                lVar15 = (locale)((char)lVar15 + -1);
                goto LAB_009f5ed1;
              }
              if ((bVar2 == 0 && !bVar6) &&
                 ((short)((uVar8 & 0xffff) * (uVar12 & 0xffff) >> 0x10) == 0)) {
                puVar11 = *(ushort **)(unaff_RDI + 8);
                uVar3 = *puVar11;
                this = (locale *)(ulonglong)uVar3;
                if (!CARRY2((ushort)(uVar8 * uVar12),uVar3)) goto LAB_009f5ec8;
              }
            }
LAB_009f5f18:
            uVar16 = 0;
            break;
          }
          if (*pcVar13 != cVar7) goto LAB_009f5ee3;
          if (pcVar5 == pcVar13) goto LAB_009f5f18;
          bVar14 = bVar14 + ((ulonglong)bVar14 < local_40 - 1);
          this = local_47;
          if ((local_48 & 1) != 0) {
            this = local_38;
          }
          lVar15 = this[bVar14];
LAB_009f5ed1:
          pcVar13 = pcVar13 + -1;
          *(char **)(unaff_RDI + 0x18) = pcVar13;
        } while (pcVar5 <= pcVar13);
      }
    }
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    uVar12 = FUN_009f5f4c();
    uVar16 = (ulonglong)uVar12;
  }
  std::locale::~locale(this);
LAB_009f5f06:
  return uVar16 & 0xffffffff;
}


