// Function: FUN_00f31080
// Address: 00f31080
// Size: 1903 bytes
// Class: Unknown

byte * FUN_00f31080(char *param_1,void*param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int64_t lVar5;
  byte *pbVar6;
  uint64_t uVar7;
  void*puVar8;
  int64_t *plVar9;
  byte *pbVar10;
  int64_t lVar11;
  uint64_t uVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar16;
  uint32_t uVar17;
  
  uVar16 = SUB84(param_1,0);
  pcVar13 = param_1;
  pcVar4 = (char *)FUN_00f2fd80();
  lVar5 = FUN_00f2df60();
  if ((pcVar4 == (char *)0x0) || (cVar2 = *pcVar4, cVar2 == '\0')) {
    if (lVar5 == 0) {
      return (byte *)0x0;
    }
    if (*(char *)(lVar5 + 0x50) != '\0') {
      return (byte *)0x0;
    }
    *(void*)(lVar5 + 0x50) = 1;
    *(void*)(lVar5 + 0x54) = 3;
    _strlen(pcVar13);
    FUN_00f2d870();
    *(void*)(lVar5 + 100) = 0xffffffffffffffff;
    return (byte *)0x0;
  }
  if (param_2 != (void*)0x0) {
    FUN_00f2fb40(extraout_XMM0_Da,(uint64_t)param_1 & 0xffffffff);
    *(void*)(this_ptr + 8) = *param_2;
    cVar2 = *pcVar4;
  }
  if (cVar2 == '<') {
    pbVar6 = (byte *)FUN_00f2fd80();
    FUN_00f2d870(extraout_XMM0_Da_00,0);
    if (pbVar6 != (byte *)0x0) {
      bVar3 = *pbVar6;
      uVar7 = (uint64_t)bVar3;
      if ((uVar7 != 0) &&
         (((pbVar10 = pbVar6, pcVar13 = PTR___DefaultRuneLocale_0249c238, 0x7e < bVar3 ||
           ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3d] & 1) != 0)) || (bVar3 == 0x5f)))) {
        do {
          bVar3 = (byte)uVar7;
          if (((bVar3 < 0x7f) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3d] & 5) == 0)) &&
             ((uVar15 = (int)uVar7 - 0x2d, 0x32 < (byte)uVar15 ||
              ((0x4000000002003U >> ((uint64_t)(uVar15 & 0xff) & 0x3f) & 1) == 0))))
          goto LAB_00f31270;
          pbVar1 = pbVar10 + 1;
          uVar7 = (uint64_t)*pbVar1;
          pbVar10 = pbVar10 + 1;
        } while (*pbVar1 != 0);
        bVar3 = 0;
LAB_00f31270:
        if (0 < (int64_t)pbVar10 - (int64_t)pbVar6) {
          FUN_00f2d870();
          bVar3 = *pbVar10;
        }
        if (bVar3 != 0) {
          puVar8 = operator_new__((ulong)pcVar13);
          *puVar8 = 2;
          *(void*)((int64_t)puVar8 + 0x12) = 0;
          puVar8[1] = 2;
          *(void*)(puVar8 + 2) = 0x2f3c;
          FUN_00f2d920();
          while (*pbVar10 != 0) {
            pcVar4 = (char *)FUN_00f2fd80();
            if (pcVar4 == (char *)0x0) {
LAB_00f31429:
              if ((lVar5 == 0) || (*(char *)(lVar5 + 0x50) != '\0')) goto LAB_00f31761;
              *(void*)(lVar5 + 0x50) = 1;
              *(void*)(lVar5 + 0x54) = 6;
              _strlen(pcVar13);
              uVar17 = FUN_00f2d870();
              *(void*)(lVar5 + 100) = 0xffffffffffffffff;
              if (param_2 == (void*)0x0) goto LAB_00f31761;
              FUN_00f2fb40(uVar17,uVar16);
              uVar12 = *param_2;
              goto LAB_00f3175c;
            }
            cVar2 = *pcVar4;
            if (cVar2 == '>') {
              pcVar13 = (char *)((uint64_t)param_1 & 0xffffffff);
              pcVar4 = (char *)FUN_00f31830(pcVar13,param_2);
              if ((pcVar4 != (char *)0x0) && (cVar2 = *pcVar4, cVar2 != '\0')) {
                pcVar13 = (char *)0x0;
                goto LAB_00f31550;
              }
              if ((lVar5 == 0) || (*(char *)(lVar5 + 0x50) != '\0')) goto LAB_00f31761;
              *(void*)(lVar5 + 0x50) = 1;
              *(void*)(lVar5 + 0x54) = 8;
              _strlen(pcVar13);
              uVar17 = FUN_00f2d870();
              goto LAB_00f316bd;
            }
            if (cVar2 == '/') {
              if (pcVar4[1] != '>') {
                if ((lVar5 == 0) || (*(char *)(lVar5 + 0x50) != '\0')) goto LAB_00f31761;
                *(void*)(lVar5 + 0x50) = 1;
                *(void*)(lVar5 + 0x54) = 7;
                _strlen(pcVar13);
                uVar17 = FUN_00f2d870();
                *(void*)(lVar5 + 100) = 0xffffffffffffffff;
                if (param_2 == (void*)0x0) goto LAB_00f31761;
                goto LAB_00f3174b;
              }
              pbVar10 = (byte *)(pcVar4 + 2);
              break;
            }
            if (cVar2 == '\0') goto LAB_00f31429;
            plVar9 = operator_new((ulong)pcVar13);
            plVar9[1] = -1;
            plVar9[2] = 0;
            *plVar9 = (int64_t)&g_02593b58;
            plVar9[4] = (int64_t)&g_02802e90;
            plVar9[5] = (int64_t)&g_02802e90;
            plVar9[6] = 0;
            plVar9[7] = 0;
            plVar9[3] = lVar5;
            pcVar13 = (char *)((uint64_t)param_1 & 0xffffffff);
            pbVar10 = (byte *)FUN_00f31e20(pcVar13,param_2);
            if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0x50) == '\0')) {
                *(void*)(lVar5 + 0x50) = 1;
                *(void*)(lVar5 + 0x54) = 3;
                _strlen(pcVar13);
                uVar17 = FUN_00f2d870();
                *(void*)(lVar5 + 100) = 0xffffffffffffffff;
                if (param_2 != (void*)0x0) {
                  FUN_00f2fb40(uVar17,uVar16);
                  *(void*)(lVar5 + 100) = *param_2;
                }
              }
              (**(code **)(*plVar9 + 8))();
              goto LAB_00f31761;
            }
            lVar11 = FUN_00f2de00();
            if (lVar11 != 0) {
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0x50) == '\0')) {
                *(void*)(lVar5 + 0x50) = 1;
                *(void*)(lVar5 + 0x54) = 3;
                _strlen(pcVar13);
                uVar17 = FUN_00f2d870();
                *(void*)(lVar5 + 100) = 0xffffffffffffffff;
                if (param_2 != (void*)0x0) {
                  FUN_00f2fb40(uVar17,uVar16);
                  *(void*)(lVar5 + 100) = *param_2;
                }
              }
              (**(code **)(*plVar9 + 8))();
              goto LAB_00f31761;
            }
            FUN_00f2f4e0();
          }
          goto LAB_00f31763;
        }
      }
    }
    if (lVar5 == 0) {
      return (byte *)0x0;
    }
    if (*(char *)(lVar5 + 0x50) != '\0') {
      return (byte *)0x0;
    }
    *(void*)(lVar5 + 0x50) = 1;
    *(void*)(lVar5 + 0x54) = 4;
    _strlen(pcVar13);
    uVar16 = FUN_00f2d870();
    *(void*)(lVar5 + 100) = 0xffffffffffffffff;
    if (pbVar6 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (param_2 == (void*)0x0) {
      return (byte *)0x0;
    }
    FUN_00f2fb40(uVar16,(uint64_t)param_1 & 0xffffffff);
    uVar12 = *param_2;
  }
  else {
    if (lVar5 == 0) {
      return (byte *)0x0;
    }
    if (*(char *)(lVar5 + 0x50) != '\0') {
      return (byte *)0x0;
    }
    *(void*)(lVar5 + 0x50) = 1;
    *(void*)(lVar5 + 0x54) = 3;
    _strlen(pcVar13);
    uVar16 = FUN_00f2d870();
    *(void*)(lVar5 + 100) = 0xffffffffffffffff;
    if (param_2 == (void*)0x0) {
      return (byte *)0x0;
    }
    FUN_00f2fb40(uVar16,(uint64_t)param_1 & 0xffffffff);
    uVar12 = *param_2;
  }
  *(void*)(lVar5 + 100) = uVar12;
  return (byte *)0x0;
  while( true ) {
    cVar2 = (pcVar4 + 1)[(int64_t)pcVar13];
    pcVar13 = pcVar13 + 1;
    if (cVar2 == '\0') break;
LAB_00f31550:
    cVar14 = *(char *)((int64_t)(puVar8 + 2) + (int64_t)pcVar13);
    if ((cVar14 == '\0') || (cVar2 != cVar14)) goto LAB_00f3156f;
  }
  cVar14 = *(char *)((int64_t)(puVar8 + 2) + (int64_t)pcVar13);
LAB_00f3156f:
  if (cVar14 == '\0') {
    pcVar4 = (char *)FUN_00f2fd80();
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '>')) {
      pbVar10 = (byte *)(pcVar4 + 1);
      goto LAB_00f31763;
    }
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x50) == '\0')) {
      *(void*)(lVar5 + 0x50) = 1;
      *(void*)(lVar5 + 0x54) = 8;
      _strlen(pcVar13);
      uVar17 = FUN_00f2d870();
LAB_00f316bd:
      *(void*)(lVar5 + 100) = 0xffffffffffffffff;
      pbVar10 = (byte *)0x0;
      if ((pcVar4 == (char *)0x0) || (pbVar10 = (byte *)0x0, param_2 == (void*)0x0))
      goto LAB_00f31763;
      FUN_00f2fb40(uVar17,uVar16);
      uVar12 = *param_2;
      goto LAB_00f3175c;
    }
  }
  else if ((lVar5 != 0) && (*(char *)(lVar5 + 0x50) == '\0')) {
    *(void*)(lVar5 + 0x50) = 1;
    *(void*)(lVar5 + 0x54) = 8;
    _strlen(pcVar13);
    uVar17 = FUN_00f2d870();
    *(void*)(lVar5 + 100) = 0xffffffffffffffff;
    if (param_2 != (void*)0x0) {
LAB_00f3174b:
      FUN_00f2fb40(uVar17,uVar16);
      uVar12 = *param_2;
LAB_00f3175c:
      *(void*)(lVar5 + 100) = uVar12;
    }
  }
LAB_00f31761:
  pbVar10 = (byte *)0x0;
LAB_00f31763:
  if ((puVar8 != (void*)PTRg_0249c250) && (puVar8 != (void*)0x0)) {
    operator_delete__(pcVar13);
  }
  return pbVar10;
}

