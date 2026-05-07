// Function: FUN_009d941a
// Address: 009d941a
// Size: 2321 bytes
// Class: Unknown
// String references:
//   "Incomplete escape sequence found."
//   "Incomplete property escape found."
//   "Closing } missing from property escape sequence."
//   "Escape sequence was neither a valid property nor a valid character class name."

uint64_t FUN_009d941a(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void*puVar9;
  byte *pbVar10;
  byte bVar11;
  char cVar12;
  void**ppuVar13;
  void*puVar14;
  uint64_t uVar15;
  byte *pbVar16;
  undefined7 uVar17;
  int64_t *this_ptr;
  byte *pbVar18;
  byte *local_90;
  void*local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  int64_t local_68;
  uint64_t local_60;
  ushort local_58;
  uint64_t local_54;
  uint8_t local_4c;
  void*local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  pbVar10 = (byte *)this_ptr[0x10];
  lVar8 = this_ptr[0x11];
  pbVar16 = (byte *)(lVar8 + 1);
  this_ptr[0x11] = (int64_t)pbVar16;
  if (pbVar16 == pbVar10) {
    lVar8 = this_ptr[0xf];
    ppuVar13 = &local_88;
    FUN_009d5ed0();
    FUN_009d8cfc(ppuVar13,(int64_t)pbVar16 - lVar8);
    goto LAB_009d94bd;
  }
  lVar6 = *(int64_t *)this_ptr[1];
  cVar12 = *(char *)(lVar6 + 0x20 + (uint64_t)*pbVar16);
  bVar11 = cVar12 - 0x11;
  if (0x2a < bVar11) goto switchD_009d947b_caseD_1a;
  bVar1 = 0;
  uVar4 = (&switchD_009d947b::switchdataD_009d9d8c)[bVar11];
  uVar17 = (undefined7)((uint64_t)pbVar16 >> 8);
  switch(cVar12) {
  case '\x11':
    uVar7 = FUN_009dd9d0();
    return uVar7;
  case '\x12':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '\x13':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '\x14':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '\x15':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '\x16':
    goto switchD_009d947b_caseD_16;
  case '\x17':
    bVar1 = 1;
    goto switchD_009d947b_caseD_16;
  case '\x18':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '\x19':
    this_ptr[0x11] = lVar8 + 2;
    break;
  default:
    goto switchD_009d947b_caseD_1a;
  case '!':
    if ((*(ushort *)(*this_ptr + 0x28) & 0x203) == 0) goto LAB_009d977c;
    goto switchD_009d947b_caseD_1a;
  case '0':
    uVar7 = FUN_009ddabc();
    return uVar7;
  case '1':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '2':
    this_ptr[0x11] = lVar8 + 2;
    pbVar16 = (byte *)(uint64_t)(byte)(2 - ((*(uint *)(*this_ptr + 0x28) >> 0xc & 1) == 0));
    if ((*(uint *)(*this_ptr + 0x28) >> 0xd & 1) != 0) {
      pbVar16 = (byte *)0x0;
    }
    lVar8 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar8 + 0x10) = (char)pbVar16;
    goto LAB_009d981a;
  case '3':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '4':
    this_ptr[0x11] = lVar8 + 2;
    break;
  case '6':
    goto switchD_009d947b_caseD_36;
  case '7':
    bVar1 = 1;
switchD_009d947b_caseD_36:
    pbVar16 = (byte *)(lVar8 + 2);
    this_ptr[0x11] = (int64_t)pbVar16;
    if (pbVar16 == pbVar10) {
      lVar8 = this_ptr[0xf];
      ppuVar13 = &local_88;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar13,(int64_t)pbVar10 - lVar8);
LAB_009d94bd:
      if (((uint64_t)local_88 & 1) != 0) {
        operator_delete(ppuVar13);
      }
LAB_009d94cc:
      uVar7 = 0;
      goto LAB_009d981c;
    }
    if (*(char *)(lVar6 + 0x20 + (uint64_t)*pbVar16) == '\x0f') {
      pbVar16 = (byte *)(lVar8 + 3);
      do {
        this_ptr[0x11] = (int64_t)pbVar16;
        if (pbVar10 == pbVar16) {
          lVar8 = this_ptr[0xf];
          ppuVar13 = &local_88;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar13,(int64_t)pbVar10 - lVar8);
          goto LAB_009d94bd;
        }
        bVar11 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (*(char *)(lVar6 + 0x20 + (uint64_t)bVar11) != '\x10');
      this_ptr[0x11] = (int64_t)pbVar16;
      uVar4 = FUN_009d826e();
    }
    else {
      uVar4 = FUN_009d826e();
      this_ptr[0x11] = this_ptr[0x11] + 1;
    }
    puVar14 = (void*)(uint64_t)uVar4;
    if (uVar4 == 0) {
      lVar8 = this_ptr[0x11];
      lVar6 = this_ptr[0xf];
      ppuVar13 = &local_88;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar13,lVar8 - lVar6);
      goto LAB_009d94bd;
    }
    local_88 = &local_80;
    local_78 = 0;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = &local_40;
    local_40 = 0;
    local_38 = 0;
    local_58 = (ushort)bVar1;
    local_54 = (uint64_t)uVar4;
    local_4c = 0;
    lVar8 = FUN_009de670(puVar14,0);
    uVar7 = CONCAT71(uVar17,1);
    if (lVar8 == 0) {
      FUN_009d86be();
      goto LAB_009d983e;
    }
    goto LAB_009d98f4;
  case '9':
    if ((*(ushort *)(*this_ptr + 0x28) & 0x203) != 0) goto LAB_009d977c;
    local_90 = (byte *)(lVar8 + 2);
    this_ptr[0x11] = (int64_t)local_90;
    if (local_90 == pbVar10) {
      lVar8 = this_ptr[0xf];
      ppuVar13 = &local_88;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar13,(int64_t)pbVar10 - lVar8);
      goto LAB_009d94bd;
    }
    bVar11 = *local_90;
    bVar1 = *(byte *)(lVar6 + 0x20 + (uint64_t)bVar11);
    lVar6 = 2;
    bVar2 = false;
    if ((uint64_t)bVar1 < 0x1a) {
      uVar7 = 0;
      if ((0x2108000UL >> ((uint64_t)bVar1 & 0x3f) & 1) != 0) {
        local_90 = (byte *)(lVar8 + 3);
        this_ptr[0x11] = (int64_t)local_90;
        if (local_90 == pbVar10) {
          lVar8 = this_ptr[0xf];
          ppuVar13 = &local_88;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar13,(int64_t)pbVar10 - lVar8);
          goto LAB_009d94bd;
        }
        uVar7 = 0x10;
        if (bVar1 != 0xf) {
          uVar7 = (uint64_t)(byte)((bVar1 != 0x14) * '\x04' + 0x15);
        }
        bVar11 = *local_90;
        bVar2 = true;
        lVar6 = 3;
      }
    }
    else {
      uVar7 = 0;
    }
    if (bVar11 == 0x2d) {
      local_90 = (byte *)(lVar8 + 1 + lVar6);
      this_ptr[0x11] = (int64_t)local_90;
      if (local_90 == pbVar10) {
        lVar8 = this_ptr[0xf];
        ppuVar13 = &local_88;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar13,(int64_t)pbVar10 - lVar8);
        goto LAB_009d94bd;
      }
    }
    puVar9 = (void*)FUN_009dcab0(10,pbVar10);
    cVar12 = (char)uVar7;
    if ((cVar12 != '\0') && ((int64_t)puVar9 < 0)) {
      pbVar16 = (byte *)this_ptr[0x10];
      pbVar10 = (byte *)this_ptr[0x11];
      puVar9 = &g_00002710;
      local_90 = pbVar10;
      if (pbVar10 != pbVar16) {
        lVar8 = *(int64_t *)this_ptr[1];
        cVar3 = *(char *)(lVar8 + 0x20 + (uint64_t)*pbVar10);
        while (pbVar18 = local_90, cVar3 != cVar12) {
          local_90 = local_90 + 1;
          this_ptr[0x11] = (int64_t)local_90;
          pbVar18 = pbVar16;
          if (pbVar16 == local_90) break;
          cVar3 = *(char *)(lVar8 + 0x20 + (uint64_t)*local_90);
        }
        uVar7 = 0;
        if (pbVar10 != pbVar18) {
          uVar15 = 0;
          do {
            uVar7 = uVar15 * 0x40;
            uVar15 = (uVar15 >> 2) + uVar7 + (int64_t)(char)*pbVar10 + 0x9e3779b9 ^ uVar15;
            pbVar10 = pbVar10 + 1;
          } while (pbVar18 != pbVar10);
          puVar9 = &g_00002710 + uVar15 % 0x7fffd8ee;
        }
      }
    }
    if (bVar11 == 0x2d) {
      puVar9 = (void*)((uint64_t)((int)this_ptr[0x12] + 1) - (int64_t)puVar9);
    }
    if (((int64_t)puVar9 < 0x21) && (puVar9 + -1 < (void*)0x1f)) {
      uVar4 = *(uint *)((int64_t)this_ptr + 0x24) >> ((byte)((char)puVar9 - 1) & 0x1f);
joined_r0x009d9cd9:
      if ((uVar4 & 1) != 0) {
        this_ptr[0x11] = (int64_t)local_90;
        lVar8 = FUN_009d8a9c();
        *(int *)(lVar8 + 0x10) = (int)puVar9;
        *(byte *)(lVar8 + 0x14) = (byte)(*(uint *)(*this_ptr + 0x28) >> 0x14) & 1;
        this_ptr[0x11] = (int64_t)local_90;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
        if (!bVar2) goto LAB_009d981c;
        if ((local_90 != (byte *)this_ptr[0x10]) &&
           (*(char *)(*(int64_t *)this_ptr[1] + 0x20 + (uint64_t)*local_90) == cVar12)) {
          this_ptr[0x11] = (int64_t)(local_90 + 1);
          goto LAB_009d981c;
        }
        lVar8 = this_ptr[0xf];
        ppuVar13 = &local_88;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar13,(int64_t)local_90 - lVar8);
        goto LAB_009d94bd;
      }
    }
    else if ((10000 < (int64_t)puVar9) &&
            ((iVar5 = FUN_009ddbc4(), 0 < iVar5 && (iVar5 = FUN_009ddbc4(), iVar5 < 0x21)))) {
      uVar4 = *(uint *)((int64_t)this_ptr + 0x24);
      uVar7 = (uint64_t)uVar4;
      cVar3 = FUN_009ddbc4();
      uVar4 = uVar4 >> ((byte)(cVar3 - 1) & 0x1f);
      goto joined_r0x009d9cd9;
    }
    FUN_009d86be();
    goto LAB_009d94cc;
  case ':':
    if ((*(ushort *)(*this_ptr + 0x28) & 0x203) != 0) goto LAB_009d977c;
    lVar6 = FUN_009d8a9c((int64_t)&switchD_009d947b::switchdataD_009d9d8c + (int64_t)(int)uVar4,
                         0x18);
    *(void*)(lVar6 + 0x10) = 0xfffffffb;
    lVar8 = *this_ptr;
    *(byte *)(lVar6 + 0x14) = (byte)(*(uint *)(lVar8 + 0x28) >> 0x14) & 1;
    *(uint64_t *)(lVar8 + 0x168) =
         ((*(int64_t *)(lVar8 + 0x168) - *(int64_t *)(lVar8 + 0x160)) + 7U & 0xfffffffffffffff8) +
         *(int64_t *)(lVar8 + 0x160);
    this_ptr[0x11] = this_ptr[0x11] + 1;
    goto LAB_009d981a;
  case ';':
    if ((*(ushort *)(*this_ptr + 0x28) & 0x203) == 0) {
      lVar6 = this_ptr[0xf];
      this_ptr[0x11] = (int64_t)&g_023cf0c0;
      this_ptr[0xf] = (int64_t)&g_023cf0c0;
      this_ptr[0x10] = (int64_t)&g_023cf0d4;
      uVar7 = FUN_009d8d70();
      this_ptr[0x11] = lVar8 + 2;
      this_ptr[0x10] = (int64_t)pbVar10;
      this_ptr[0xf] = lVar6;
      return uVar7;
    }
LAB_009d977c:
    bVar1 = 0;
switchD_009d947b_caseD_16:
    uVar4 = FUN_009d826e();
    if (uVar4 != 0) {
      local_88 = &local_80;
      local_78 = 0;
      local_80 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      puVar14 = &local_40;
      local_40 = 0;
      local_38 = 0;
      local_58 = (ushort)bVar1;
      local_54 = (uint64_t)uVar4;
      local_4c = 0;
      local_48 = puVar14;
      lVar8 = FUN_009de670(puVar14,0);
      if (lVar8 == 0) {
        FUN_009d86be();
LAB_009d983e:
        uVar7 = 0;
      }
      else {
        this_ptr[0x11] = this_ptr[0x11] + 1;
        uVar7 = CONCAT71(uVar17,1);
      }
LAB_009d98f4:
      FUN_009df1d6();
      if (local_70 != 0) {
        local_68 = local_70;
        operator_delete(puVar14);
      }
      FUN_009df1d6();
      goto LAB_009d981c;
    }
switchD_009d947b_caseD_1a:
    FUN_009dd3a8();
    FUN_009dd2e4();
    goto LAB_009d981a;
  }
  FUN_009d8a9c((int64_t)&switchD_009d947b::switchdataD_009d9d8c + (int64_t)(int)uVar4,0x10);
LAB_009d981a:
  uVar7 = CONCAT71((int7)((uint64_t)pbVar16 >> 8),1);
LAB_009d981c:
  return uVar7 & 0xffffffff;
}

