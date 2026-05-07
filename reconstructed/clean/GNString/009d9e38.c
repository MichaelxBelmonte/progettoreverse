// Function: FUN_009d9e38
// Address: 009d9e38
// Size: 1105 bytes
// Class: GNString
// String references:
//   "Nothing to repeat."
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009d9e38(uint64_t param_1,uint64_t param_2)

{
  uint8_t uVar1;
  uint *puVar2;
  bool bVar3;
  uint64_t uVar4;
  char cVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  byte *pbVar9;
  int64_t lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t arg1;
  int64_t *this_ptr;
  bool bVar16;
  byte local_58 [24];
  uint64_t local_40;
  
  pbVar12 = (byte *)this_ptr[0x10];
  pbVar13 = (byte *)this_ptr[0x11];
  bVar16 = true;
  if ((pbVar13 == pbVar12) ||
     ((uVar6 = *(uint *)(*this_ptr + 0x28), (uVar6 & 0x203) != 0 && ((uVar6 & 0x1003) != 0x1001))))
  {
LAB_009d9f32:
    bVar3 = false;
  }
  else {
    if ((uVar6 & 0xa03) == 0x800) {
      do {
        cVar5 = FUN_009df118();
        if (cVar5 == '\0') {
          pbVar12 = (byte *)this_ptr[0x10];
          pbVar13 = (byte *)this_ptr[0x11];
          break;
        }
        pbVar12 = (byte *)this_ptr[0x11] + 1;
        this_ptr[0x11] = (int64_t)pbVar12;
        pbVar13 = pbVar12;
      } while (pbVar12 != (byte *)this_ptr[0x10]);
    }
    if (pbVar13 == pbVar12) goto LAB_009d9f32;
    bVar16 = *(char *)(*(int64_t *)this_ptr[1] + 0x20 + (uint64_t)*pbVar13) != '\b';
    if (!bVar16) {
      pbVar13 = pbVar13 + 1;
      this_ptr[0x11] = (int64_t)pbVar13;
    }
    if (((pbVar13 == pbVar12) || ((*(byte *)(*this_ptr + 0x28) & 3) != 0)) ||
       (*(char *)(*(int64_t *)this_ptr[1] + 0x20 + (uint64_t)*pbVar13) != '\a'))
    goto LAB_009d9f32;
    pbVar13 = pbVar13 + 1;
    this_ptr[0x11] = (int64_t)pbVar13;
    bVar3 = true;
  }
  puVar2 = (uint *)this_ptr[2];
  if (puVar2 == (uint *)0x0) {
    lVar14 = this_ptr[0xf];
    pbVar12 = local_58;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar12,(int64_t)pbVar13 - lVar14);
    if ((local_58[0] & 1) != 0) {
      operator_delete(pbVar12);
    }
LAB_009d9fa3:
    uVar15 = 0;
  }
  else {
    uVar6 = *puVar2;
    uVar4 = param_2;
    if (uVar6 < 0x1b) {
      pbVar12 = (byte *)0x4331f99;
      if ((0x4331f99U >> (uVar6 & 0x1f) & 1) != 0) {
        lVar14 = (int64_t)pbVar13 - this_ptr[0xf];
LAB_009d9f63:
        FUN_009d86be(pbVar12,lVar14);
        goto LAB_009d9fa3;
      }
      uVar4 = param_2;
      if (((uVar6 != 1) && (uVar4 = param_2, uVar6 == 2)) && (uVar4 = param_2, 1 < puVar2[4])) {
        uVar6 = puVar2[4] - 1;
        uVar1 = *(void*)((int64_t)puVar2 + (uint64_t)uVar6 + 0x18);
        puVar2[4] = uVar6;
        local_40 = param_2;
        lVar14 = FUN_009d8a9c(0x4331f99,0x19);
        *(void*)(lVar14 + 0x10) = 1;
        *(void*)(lVar14 + 0x18) = uVar1;
        uVar4 = local_40;
      }
    }
    local_40 = uVar4;
    lVar7 = FUN_009dcfc8(0x138,0x12);
    *(void*)(lVar7 + 0x120) = arg1;
    *(void*)(lVar7 + 0x128) = local_40;
    *(bool *)(lVar7 + 0x135) = bVar16;
    *(void*)(lVar7 + 0x134) = 0;
    lVar7 = lVar7 - *(int64_t *)(*this_ptr + 0x160);
    lVar14 = FUN_009d8a9c();
    *(int64_t *)(lVar14 + 0x10) = (lVar7 - lVar14) + *(int64_t *)(*this_ptr + 0x160);
    lVar14 = *this_ptr;
    lVar8 = *(int64_t *)(lVar14 + 0x160);
    lVar10 = ((*(int64_t *)(lVar14 + 0x168) - lVar8) + 7U & 0xfffffffffffffff8) + lVar8;
    *(int64_t *)(lVar14 + 0x168) = lVar10;
    *(int64_t *)(lVar8 + 0x10 + lVar7) = lVar10 - (lVar8 + lVar7);
    uVar15 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
    if (bVar3) {
      pbVar9 = (byte *)this_ptr[0x10];
      pbVar13 = (byte *)this_ptr[0x11];
      if (pbVar13 != pbVar9) {
        uVar15 = 0;
        pbVar11 = pbVar13;
        do {
          pbVar12 = pbVar13;
          if (((*(uint *)(*this_ptr + 0x28) & 0xa03) == 0x800) && (pbVar13 != pbVar9)) {
            do {
              cVar5 = FUN_009df118(pbVar13,*(void*)((int64_t)this_ptr + 0x54));
              pbVar12 = (byte *)this_ptr[0x11];
              if (cVar5 == '\0') {
                pbVar9 = (byte *)this_ptr[0x10];
                pbVar11 = pbVar12;
                break;
              }
              pbVar9 = pbVar12 + 1;
              this_ptr[0x11] = (int64_t)pbVar9;
              pbVar13 = pbVar9;
              pbVar12 = pbVar9;
              pbVar11 = pbVar9;
            } while (pbVar9 != (byte *)this_ptr[0x10]);
          }
          if (pbVar12 == pbVar9) break;
          lVar14 = *(int64_t *)this_ptr[1];
          cVar5 = *(char *)(lVar14 + 0x20 + (uint64_t)*pbVar12);
          if (cVar5 == '\x01') {
            if (((pbVar9 <= pbVar12 + 2) ||
                (uVar15 = (uint64_t)pbVar12[1], *(char *)(lVar14 + 0x20 + uVar15) != '\b')) ||
               (*(char *)(lVar14 + 0x20 + (uint64_t)pbVar12[2]) != '\r')) break;
            uVar15 = 1;
            pbVar13 = pbVar9;
            if (pbVar12 != pbVar9) {
              do {
                pbVar11 = pbVar12;
                pbVar12 = pbVar11 + 1;
                this_ptr[0x11] = (int64_t)pbVar12;
                if (*(char *)(lVar14 + 0x20 + (uint64_t)*pbVar11) == '\x02') {
                  pbVar13 = pbVar11 + 1;
                  break;
                }
              } while (pbVar9 != pbVar12);
              pbVar11 = pbVar11 + 1;
            }
          }
          else if (((byte)(cVar5 - 6U) < 3) || (pbVar13 = pbVar12, cVar5 == '\x0f')) {
            lVar14 = (int64_t)pbVar11 - this_ptr[0xf];
            goto LAB_009d9f63;
          }
          if ((char)uVar15 == '\0') break;
        } while( true );
      }
      lVar14 = FUN_009dcfc8(0x18,0);
      *(void*)(lVar14 + 0x10) = 0xfffffffd;
      uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
      *(byte *)(lVar14 + 0x14) = (byte)(*(uint *)(*this_ptr + 0x28) >> 0x14) & 1;
      lVar8 = FUN_009dcfc8(0x18,0x10);
      lVar14 = *this_ptr;
      lVar7 = ((*(int64_t *)(lVar14 + 0x168) - *(int64_t *)(lVar14 + 0x160)) + 7U &
              0xfffffffffffffff8) + *(int64_t *)(lVar14 + 0x160);
      *(int64_t *)(lVar14 + 0x168) = lVar7;
      *(int64_t *)(lVar8 + 0x10) = lVar7 - lVar8;
      lVar14 = FUN_009d8a9c(lVar14,0x18);
      *(void*)(lVar14 + 0x10) = 0xfffffffd;
      *(byte *)(lVar14 + 0x14) = (byte)(*(uint *)(*this_ptr + 0x28) >> 0x14) & 1;
    }
  }
  return uVar15 & 0xffffffff;
}

