// Function: FUN_009f5d18
// Address: 009f5d18
// Size: 517 bytes
// Class: Unknown

uint64_t FUN_009f5d18(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  int64_t lVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int64_t *plVar9;
  locale *plVar10;
  ushort *puVar11;
  locale *this;
  uint uVar12;
  byte *this_ptr;
  char *pcVar13;
  byte bVar14;
  locale lVar15;
  uint64_t uVar16;
  byte local_48;
  locale local_47 [7];
  uint64_t local_40;
  locale *local_38;
  
  this = *(locale **)(this_ptr + 8);
  lVar4 = *(int64_t *)(this_ptr + 0x18);
  pbVar1 = (byte *)(lVar4 - 1);
  *(byte **)(this_ptr + 0x18) = pbVar1;
  *(void*)this = 0;
  if ((pbVar1 < *(byte **)(this_ptr + 0x10)) || (9 < (byte)(*pbVar1 - 0x30))) {
    uVar16 = 0;
    goto LAB_009f5f06;
  }
  uVar12 = *pbVar1 - 0x30;
  plVar10 = (locale *)(uint64_t)uVar12;
  *(short *)this = (short)uVar12;
  *(int64_t *)(this_ptr + 0x18) = lVar4 + -2;
  std::locale::locale(this);
  std::locale::classic();
  cVar7 = std::locale::operator==(this,plVar10);
  if (cVar7 == '\0') {
    plVar9 = (int64_t *)std::locale::use_facet((id *)this);
    (**(code **)(*plVar9 + 0x28))();
    this = (locale *)CONCAT71((int7)((uint64_t)this >> 8),1);
    if ((local_48 & 1) == 0) {
      local_40 = (uint64_t)(local_48 >> 1);
    }
    if (local_40 == 0) {
LAB_009f5ee3:
      uVar12 = FUN_009f5f4c();
      uVar16 = (uint64_t)uVar12;
    }
    else {
      this = local_47;
      if ((local_48 & 1) != 0) {
        this = local_38;
      }
      if ((char)*this < '\x01') goto LAB_009f5ee3;
      cVar7 = (**(code **)(*plVar9 + 0x20))();
      pcVar5 = *(char **)(this_ptr + 0x10);
      pcVar13 = *(char **)(this_ptr + 0x18);
      uVar16 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
      if (pcVar5 <= pcVar13) {
        plVar10 = local_47;
        if ((local_48 & 1) != 0) {
          plVar10 = local_38;
        }
        lVar15 = (locale)((char)*plVar10 + -1);
        bVar14 = 0;
        do {
          if (lVar15 != (locale)0x0) {
            bVar2 = *this_ptr;
            uVar3 = *(ushort *)(this_ptr + 2);
            bVar6 = 0x1999 < uVar3;
            this = (locale *)CONCAT71((int7)((uint64_t)this >> 8),bVar6);
            *this_ptr = bVar2 | bVar6;
            uVar12 = ((uint)uVar3 + (uint)uVar3) * 5;
            *(short *)(this_ptr + 2) = (short)uVar12;
            if ((byte)(*pcVar13 - 0x30U) < 10) {
              uVar8 = (int)*pcVar13 - 0x30;
              if ((short)uVar8 == 0) {
                puVar11 = *(ushort **)(this_ptr + 8);
                uVar3 = *puVar11;
LAB_009f5ec8:
                uVar12 = (uint)uVar3 + uVar8 * uVar12;
                this = (locale *)(uint64_t)uVar12;
                *puVar11 = (ushort)uVar12;
                lVar15 = (locale)((char)lVar15 + -1);
                goto LAB_009f5ed1;
              }
              if ((bVar2 == 0 && !bVar6) &&
                 ((short)((uVar8 & 0xffff) * (uVar12 & 0xffff) >> 0x10) == 0)) {
                puVar11 = *(ushort **)(this_ptr + 8);
                uVar3 = *puVar11;
                this = (locale *)(uint64_t)uVar3;
                if (!CARRY2((ushort)(uVar8 * uVar12),uVar3)) goto LAB_009f5ec8;
              }
            }
LAB_009f5f18:
            uVar16 = 0;
            break;
          }
          if (*pcVar13 != cVar7) goto LAB_009f5ee3;
          if (pcVar5 == pcVar13) goto LAB_009f5f18;
          bVar14 = bVar14 + ((uint64_t)bVar14 < local_40 - 1);
          this = local_47;
          if ((local_48 & 1) != 0) {
            this = local_38;
          }
          lVar15 = this[bVar14];
LAB_009f5ed1:
          pcVar13 = pcVar13 + -1;
          *(char **)(this_ptr + 0x18) = pcVar13;
        } while (pcVar5 <= pcVar13);
      }
    }
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    uVar12 = FUN_009f5f4c();
    uVar16 = (uint64_t)uVar12;
  }
  std::locale::~locale(this);
LAB_009f5f06:
  return uVar16 & 0xffffffff;
}

