// Function: FUN_009df708
// Address: 009df708
// Size: 1215 bytes
// Class: Unknown

uint64_t FUN_009df708(void)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void*puVar10;
  void*puVar11;
  int iVar12;
  byte *pbVar13;
  int64_t arg1;
  int64_t *this_ptr;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte local_48;
  uint8_t local_47 [7];
  void*local_40;
  void*local_38;
  
  pbVar3 = (byte *)this_ptr[0x10];
  lVar4 = this_ptr[0x11];
  pbVar8 = (byte *)(lVar4 + 1);
  this_ptr[0x11] = (int64_t)pbVar8;
  if (pbVar3 == pbVar8) {
    lVar4 = this_ptr[0xf];
    pbVar8 = &local_48;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
LAB_009df796:
    if ((local_48 & 1) != 0) {
      operator_delete(pbVar8);
    }
  }
  else {
    lVar5 = *(int64_t *)this_ptr[1];
    cVar1 = *(char *)(lVar5 + 0x20 + (uint64_t)*pbVar8);
    puVar10 = (void*)0x0;
    if (cVar1 != '%') {
      if ((cVar1 != '$') ||
         (uVar6 = *(uint *)(*this_ptr + 0x28) & 0x103, puVar10 = (void*)(uint64_t)uVar6,
         uVar6 == 0x101)) {
        this_ptr[0x11] = lVar4;
        FUN_009df5d8();
LAB_009df768:
        uVar7 = CONCAT71((int7)((uint64_t)puVar10 >> 8),1);
        goto LAB_009df7a7;
      }
      pbVar8 = (byte *)(lVar4 + 2);
      this_ptr[0x11] = (int64_t)pbVar8;
      if (pbVar3 == pbVar8) {
        lVar4 = this_ptr[0xf];
        pbVar8 = &local_48;
        FUN_009d5ed0();
        FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
      }
      else {
        pbVar16 = (byte *)(lVar4 + 3);
        this_ptr[0x11] = (int64_t)pbVar16;
        pbVar9 = pbVar16;
        pbVar15 = pbVar8;
        if (pbVar3 == pbVar16) {
          lVar4 = this_ptr[0xf];
          pbVar8 = &local_48;
          FUN_009d5ed0();
          FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
        }
        else {
          do {
            if (pbVar3 == pbVar9) {
              lVar4 = this_ptr[0xf];
              pbVar8 = &local_48;
              FUN_009d5ed0();
              FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
              goto LAB_009df796;
            }
            pbVar13 = pbVar9 + 1;
            pbVar14 = pbVar15 + 1;
            cVar1 = *(char *)(lVar5 + 0x20 + (uint64_t)*pbVar9);
            this_ptr[0x11] = (int64_t)(pbVar15 + 2);
            pbVar9 = pbVar13;
            pbVar15 = pbVar14;
          } while (cVar1 != '$');
          if ((pbVar3 != pbVar13) && (*(char *)(lVar5 + 0x20 + (uint64_t)*pbVar13) == '\n')) {
            puVar10 = (void*)(uint64_t)*pbVar8;
            cVar1 = puVar10[lVar5 + 0x20];
            if (cVar1 != '\x04') {
              pbVar16 = pbVar8;
            }
            uVar6 = FUN_009d826e(puVar10,pbVar14);
            if (uVar6 != 0) {
              if (cVar1 == '\x04') {
                *(uint *)(arg1 + 0x38) = *(uint *)(arg1 + 0x38) | uVar6;
              }
              else {
                *(uint *)(arg1 + 0x34) = *(uint *)(arg1 + 0x34) | uVar6;
              }
              *(void*)(arg1 + 0x3c) = 0;
              this_ptr[0x11] = this_ptr[0x11] + 1;
              goto LAB_009df768;
            }
            if ((*(char *)(arg1 + 0x3c) != '\0') &&
               ((int64_t)pbVar14 - (int64_t)pbVar16 == 1)) {
              lVar4 = this_ptr[0x11];
              pbVar8 = (byte *)(lVar4 + 1);
              this_ptr[0x11] = (int64_t)pbVar8;
              if ((pbVar8 != (byte *)this_ptr[0x10]) &&
                 (lVar5 = *(int64_t *)this_ptr[1],
                 *(char *)(lVar5 + 0x20 + (uint64_t)*pbVar8) == '\n')) {
                cVar1 = *(char *)(lVar5 + 0x20 + (uint64_t)*pbVar16);
                if (cVar1 == '\x15') {
                  this_ptr[0x11] = lVar4 + 2;
                }
                else {
                  if (cVar1 != '\x14') goto LAB_009dfb75;
                  this_ptr[0x11] = lVar4 + 2;
                }
                FUN_009d8a9c(CONCAT71((int7)((uint64_t)lVar5 >> 8),cVar1),0x10);
                goto LAB_009df7a5;
              }
            }
LAB_009dfb75:
            FUN_009d86be();
            goto LAB_009df7a5;
          }
          lVar4 = this_ptr[0xf];
          pbVar8 = &local_48;
          FUN_009d5ed0();
          FUN_009d8cfc(pbVar8,(int64_t)pbVar13 - lVar4);
        }
      }
      goto LAB_009df796;
    }
    pbVar8 = (byte *)(lVar4 + 2);
    this_ptr[0x11] = (int64_t)pbVar8;
    if (pbVar3 == pbVar8) {
      lVar4 = this_ptr[0xf];
      pbVar8 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
      goto LAB_009df796;
    }
    pbVar15 = (byte *)(lVar4 + 3);
    this_ptr[0x11] = (int64_t)pbVar15;
    pbVar9 = pbVar8;
    if (pbVar3 == pbVar15) {
      lVar4 = this_ptr[0xf];
      pbVar8 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
      goto LAB_009df796;
    }
    do {
      if (pbVar3 == pbVar15) {
        lVar4 = this_ptr[0xf];
        pbVar8 = &local_48;
        FUN_009d5ed0();
        FUN_009d8cfc(pbVar8,(int64_t)pbVar3 - lVar4);
        goto LAB_009df796;
      }
      bVar2 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      pbVar16 = pbVar9 + 1;
      cVar1 = *(char *)(lVar5 + 0x20 + (uint64_t)bVar2);
      this_ptr[0x11] = (int64_t)(pbVar9 + 2);
      pbVar9 = pbVar16;
    } while (cVar1 != '%');
    if ((pbVar3 == pbVar15) || (*(char *)(lVar5 + 0x20 + (uint64_t)*pbVar15) != '\n')) {
      lVar4 = this_ptr[0xf];
      pbVar8 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar8,(int64_t)pbVar15 - lVar4);
      goto LAB_009df796;
    }
    FUN_009df20a(pbVar16,pbVar8);
    puVar10 = local_40;
    if ((local_48 & 1) == 0) {
      puVar10 = (void*)(uint64_t)(local_48 >> 1);
    }
    if (puVar10 + -1 < (void*)0x2) {
      if (puVar10 < (void*)((int64_t)&MACH_HEADER.magic + 2)) {
        puVar10 = (void*)0x0;
      }
      else {
        puVar11 = local_47;
        if ((local_48 & 1) != 0) {
          puVar11 = local_38;
        }
        puVar10 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),puVar11[1]);
      }
      FUN_009e01ca();
      this_ptr[0x11] = this_ptr[0x11] + 1;
      iVar12 = 2;
    }
    else {
      iVar12 = 1;
      FUN_009d86be(puVar10,(int64_t)pbVar8 - this_ptr[0xf]);
    }
    if ((local_48 & 1) != 0) {
      operator_delete(puVar10);
    }
    if (iVar12 != 1) goto LAB_009df768;
  }
LAB_009df7a5:
  uVar7 = 0;
LAB_009df7a7:
  return uVar7 & 0xffffffff;
}

