// Function: FUN_009f609c
// Address: 009f609c
// Size: 527 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009f609c(void)

{
  byte *pbVar1;
  byte bVar2;
  int64_t lVar3;
  char *pcVar4;
  bool bVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint64_t uVar8;
  char cVar9;
  uint uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  void*puVar13;
  locale *this;
  locale *plVar14;
  byte *this_ptr;
  char *pcVar15;
  byte bVar16;
  locale lVar17;
  uint64_t uVar18;
  byte local_48;
  locale local_47 [7];
  uint64_t local_40;
  locale *local_38;
  
  this = *(locale **)(this_ptr + 0x10);
  lVar3 = *(int64_t *)(this_ptr + 0x20);
  pbVar1 = (byte *)(lVar3 - 1);
  *(byte **)(this_ptr + 0x20) = pbVar1;
  *(void*)this = 0;
  if ((pbVar1 < *(byte **)(this_ptr + 0x18)) || (9 < (byte)(*pbVar1 - 0x30))) {
    uVar18 = 0;
    goto LAB_009f6294;
  }
  plVar14 = (locale *)((uint64_t)*pbVar1 - 0x30);
  *(locale **)this = plVar14;
  *(int64_t *)(this_ptr + 0x20) = lVar3 + -2;
  std::locale::locale(this);
  std::locale::classic();
  cVar9 = std::locale::operator==(this,plVar14);
  if (cVar9 == '\0') {
    plVar11 = (int64_t *)std::locale::use_facet((id *)this);
    (**(code **)(*plVar11 + 0x28))();
    this = (locale *)CONCAT71((int7)((uint64_t)this >> 8),1);
    if ((local_48 & 1) == 0) {
      local_40 = (uint64_t)(local_48 >> 1);
    }
    if (local_40 == 0) {
LAB_009f6271:
      uVar10 = FUN_009b47bc();
      uVar18 = (uint64_t)uVar10;
    }
    else {
      this = local_47;
      if ((local_48 & 1) != 0) {
        this = local_38;
      }
      if ((char)*this < '\x01') goto LAB_009f6271;
      cVar9 = (**(code **)(*plVar11 + 0x20))();
      pcVar4 = *(char **)(this_ptr + 0x18);
      pcVar15 = *(char **)(this_ptr + 0x20);
      uVar18 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
      if (pcVar4 <= pcVar15) {
        plVar14 = local_47;
        if ((local_48 & 1) != 0) {
          plVar14 = local_38;
        }
        lVar17 = (locale)((char)*plVar14 + -1);
        bVar16 = 0;
        do {
          if (lVar17 != (locale)0x0) {
            bVar2 = *this_ptr;
            bVar5 = 0x1999999999999999 < *(uint64_t *)(this_ptr + 8);
            this = (locale *)CONCAT71(0x19999999999999,bVar5);
            *this_ptr = bVar2 | bVar5;
            uVar8 = *(uint64_t *)(this_ptr + 8) * 10;
            *(uint64_t *)(this_ptr + 8) = uVar8;
            if ((byte)(*pcVar15 - 0x30U) < 10) {
              uVar12 = (int64_t)*pcVar15 - 0x30;
              if ((int)uVar12 == 0) {
                puVar13 = *(void**)(this_ptr + 0x10);
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
                puVar13 = *(void**)(this_ptr + 0x10);
                this = (locale *)*puVar13;
                if (!CARRY8(uVar8 * uVar12,(uint64_t)this)) goto LAB_009f6256;
              }
            }
LAB_009f62a6:
            uVar18 = 0;
            break;
          }
          if (*pcVar15 != cVar9) goto LAB_009f6271;
          if (pcVar4 == pcVar15) goto LAB_009f62a6;
          bVar16 = bVar16 + ((uint64_t)bVar16 < local_40 - 1);
          this = local_47;
          if ((local_48 & 1) != 0) {
            this = local_38;
          }
          lVar17 = this[bVar16];
LAB_009f625f:
          pcVar15 = pcVar15 + -1;
          *(char **)(this_ptr + 0x20) = pcVar15;
        } while (pcVar4 <= pcVar15);
      }
    }
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    uVar10 = FUN_009b47bc();
    uVar18 = (uint64_t)uVar10;
  }
  std::locale::~locale(this);
LAB_009f6294:
  return uVar18 & 0xffffffff;
}

