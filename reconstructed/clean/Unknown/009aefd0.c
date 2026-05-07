// Function: FUN_009aefd0
// Address: 009aefd0
// Size: 506 bytes
// Class: Unknown

uint64_t FUN_009aefd0(void)

{
  byte *pbVar1;
  byte bVar2;
  int64_t lVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int64_t *plVar8;
  locale *plVar9;
  uint *puVar10;
  uint uVar11;
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
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  pbVar1 = (byte *)(lVar3 - 1);
  *(byte **)(this_ptr + 0x18) = pbVar1;
  *(void*)this = 0;
  if ((pbVar1 < *(byte **)(this_ptr + 0x10)) || (9 < (byte)(*pbVar1 - 0x30))) {
    uVar16 = 0;
    goto LAB_009af1b3;
  }
  uVar12 = *pbVar1 - 0x30;
  plVar9 = (locale *)(uint64_t)uVar12;
  *(uint *)this = uVar12;
  *(int64_t *)(this_ptr + 0x18) = lVar3 + -2;
  std::locale::locale(this);
  std::locale::classic();
  cVar6 = std::locale::operator==(this,plVar9);
  if (cVar6 == '\0') {
    plVar8 = (int64_t *)std::locale::use_facet((id *)this);
    (**(code **)(*plVar8 + 0x28))();
    this = (locale *)CONCAT71((int7)((uint64_t)this >> 8),1);
    if ((local_48 & 1) == 0) {
      local_40 = (uint64_t)(local_48 >> 1);
    }
    if (local_40 == 0) {
LAB_009af190:
      uVar12 = FUN_009af1f8();
      uVar16 = (uint64_t)uVar12;
    }
    else {
      this = local_47;
      if ((local_48 & 1) != 0) {
        this = local_38;
      }
      if ((char)*this < '\x01') goto LAB_009af190;
      cVar6 = (**(code **)(*plVar8 + 0x20))();
      pcVar4 = *(char **)(this_ptr + 0x10);
      pcVar13 = *(char **)(this_ptr + 0x18);
      uVar16 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      if (pcVar4 <= pcVar13) {
        plVar9 = local_47;
        if ((local_48 & 1) != 0) {
          plVar9 = local_38;
        }
        lVar15 = (locale)((char)*plVar9 + -1);
        bVar14 = 0;
        do {
          if (lVar15 != (locale)0x0) {
            bVar2 = *this_ptr;
            bVar5 = 0x19999999 < *(uint *)(this_ptr + 4);
            this = (locale *)CONCAT71((int7)((uint64_t)this >> 8),bVar5);
            *this_ptr = bVar2 | bVar5;
            uVar12 = *(uint *)(this_ptr + 4) * 10;
            *(uint *)(this_ptr + 4) = uVar12;
            if ((byte)(*pcVar13 - 0x30U) < 10) {
              uVar7 = (int)*pcVar13 - 0x30;
              if (uVar7 == 0) {
                puVar10 = *(uint **)(this_ptr + 8);
                uVar11 = *puVar10;
LAB_009af176:
                uVar11 = uVar11 + uVar7 * uVar12;
                this = (locale *)(uint64_t)uVar11;
                *puVar10 = uVar11;
                lVar15 = (locale)((char)lVar15 + -1);
                goto LAB_009af17e;
              }
              if ((bVar2 == 0 && !bVar5) &&
                 ((int)((uint64_t)uVar7 * (uint64_t)uVar12 >> 0x20) == 0)) {
                puVar10 = *(uint **)(this_ptr + 8);
                uVar11 = *puVar10;
                this = (locale *)(uint64_t)uVar11;
                if (!CARRY4(uVar7 * uVar12,uVar11)) goto LAB_009af176;
              }
            }
LAB_009af1c5:
            uVar16 = 0;
            break;
          }
          if (*pcVar13 != cVar6) goto LAB_009af190;
          if (pcVar4 == pcVar13) goto LAB_009af1c5;
          bVar14 = bVar14 + ((uint64_t)bVar14 < local_40 - 1);
          this = local_47;
          if ((local_48 & 1) != 0) {
            this = local_38;
          }
          lVar15 = this[bVar14];
LAB_009af17e:
          pcVar13 = pcVar13 + -1;
          *(char **)(this_ptr + 0x18) = pcVar13;
        } while (pcVar4 <= pcVar13);
      }
    }
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    uVar12 = FUN_009af1f8();
    uVar16 = (uint64_t)uVar12;
  }
  std::locale::~locale(this);
LAB_009af1b3:
  return uVar16 & 0xffffffff;
}

