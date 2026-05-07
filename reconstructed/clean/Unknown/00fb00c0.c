// Function: FUN_00fb00c0
// Address: 00fb00c0
// Size: 1172 bytes
// Class: Unknown
// String references:
//   "crypto/conf/conf_def.c"

uint64_t FUN_00fb00c0(BUF_MEM *param_1,void*param_2)

{
  ushort uVar1;
  uint8_t uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  BUF_MEM *pBVar8;
  uint32_t extraout_var;
  char *pcVar9;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  byte bVar10;
  BUF_MEM *pBVar11;
  BUF_MEM *pBVar12;
  int64_t lVar13;
  void *pvVar14;
  void*puVar15;
  uint64_t uVar16;
  uint64_t arg1;
  int64_t this_ptr;
  BUF_MEM *pBVar17;
  char *file;
  void*puVar18;
  uint64_t uVar19;
  int line;
  
  pcVar9 = (char *)param_1;
  puVar15 = param_2;
  pBVar8 = _BUF_MEM_new();
  iVar5 = (int)puVar15;
  uVar16 = 0;
  if (pBVar8 != (BUF_MEM *)0x0) {
    _strlen(pcVar9);
    iVar5 = _BUF_MEM_grow((BUF_MEM *)pcVar9,iVar5);
    if (CONCAT44(extraout_var,iVar5) == 0) {
LAB_00fb055e:
      uVar16 = 0;
      _BUF_MEM_free((BUF_MEM *)pcVar9);
    }
    else {
      uVar2 = 0;
      uVar19 = 0;
LAB_00fb0152:
      while( true ) {
        line = (int)arg1;
        bVar3 = (byte)param_1->length;
        iVar5 = (int)uVar19;
        if (-1 < (char)bVar3) break;
LAB_00fb0140:
        uVar19 = (uint64_t)(iVar5 + 1);
        pBVar8->data[iVar5] = bVar3;
        param_1 = (BUF_MEM *)((int64_t)&param_1->length + 1);
      }
      lVar13 = *(int64_t *)(this_ptr + 8);
      uVar1 = *(ushort *)(lVar13 + (uint64_t)bVar3 * 2);
      if ((uVar1 & 0x40) != 0) {
        uVar19 = (uint64_t)iVar5;
        do {
          pBVar11 = (BUF_MEM *)((int64_t)&param_1->length + 1);
          bVar10 = *(byte *)((int64_t)&param_1->length + 1);
          if ((char)bVar10 < '\0') {
            if (bVar10 == bVar3) {
              lVar13 = 1;
              bVar10 = bVar3;
              goto LAB_00fb0275;
            }
          }
          else {
            uVar1 = *(ushort *)(*(int64_t *)(this_ptr + 8) + (uint64_t)bVar10 * 2);
            lVar13 = 1;
            if (((uVar1 & 8) != 0) || (bVar10 == bVar3)) goto LAB_00fb0275;
            if ((uVar1 & 0x20) != 0) {
              pBVar11 = (BUF_MEM *)((int64_t)&param_1->length + 2);
              bVar10 = *(byte *)((int64_t)&param_1->length + 2);
              if ((-1 < (char)bVar10) &&
                 ((*(byte *)(*(int64_t *)(this_ptr + 8) + (uint64_t)bVar10 * 2) & 8) != 0))
              goto code_r0x00fb021c;
            }
          }
          pBVar8->data[uVar19] = bVar10;
          uVar19 = uVar19 + 1;
          param_1 = pBVar11;
        } while( true );
      }
      if ((uVar1 & 0x400) != 0) {
        uVar19 = (uint64_t)iVar5;
        while( true ) {
          pBVar11 = (BUF_MEM *)((int64_t)&param_1->length + 1);
          bVar10 = *(byte *)((int64_t)&param_1->length + 1);
          if ((-1 < (char)bVar10) &&
             ((*(byte *)(*(int64_t *)(this_ptr + 8) + (uint64_t)bVar10 * 2) & 8) != 0)) break;
          if (bVar10 == bVar3) {
            bVar10 = bVar3;
            if (*(byte *)((int64_t)&param_1->length + 2) != bVar3) break;
            pBVar11 = (BUF_MEM *)((int64_t)&param_1->length + 2);
          }
          pBVar8->data[uVar19] = bVar10;
          uVar19 = uVar19 + 1;
          param_1 = pBVar11;
        }
        param_1 = (BUF_MEM *)((int64_t)&param_1->length + 2);
        if (bVar10 != bVar3) {
          param_1 = pBVar11;
        }
        goto LAB_00fb0152;
      }
      if ((uVar1 & 0x20) != 0) {
        bVar3 = *(byte *)((int64_t)&param_1->length + 1);
        if ((-1 < (char)bVar3) && ((*(byte *)(lVar13 + (uint64_t)bVar3 * 2) & 8) != 0))
        goto LAB_00fb049a;
        bVar10 = (byte)(bVar3 + 0x9e) >> 1 | bVar3 << 7;
        if ((bVar10 < 10) && ((0x341U >> (bVar10 & 0x1f) & 1) != 0)) {
          bVar3 = (&g_023f1aa0)[(char)bVar10];
        }
        uVar19 = (uint64_t)(iVar5 + 1);
        pBVar8->data[iVar5] = bVar3;
        param_1 = (BUF_MEM *)((int64_t)&param_1->length + 2);
        goto LAB_00fb0152;
      }
      if ((uVar1 & 8) == 0) {
        if (bVar3 != 0x24) goto LAB_00fb0140;
        bVar3 = *(byte *)((int64_t)&param_1->length + 1);
        if (bVar3 == 0x7b) {
          bVar10 = 0x7d;
LAB_00fb02e6:
          pBVar11 = (BUF_MEM *)((int64_t)&param_1->length + 2);
          bVar3 = *(byte *)((int64_t)&param_1->length + 2);
          file = (char *)0x0;
        }
        else {
          if (bVar3 == 0x28) {
            bVar10 = 0x29;
            goto LAB_00fb02e6;
          }
          pBVar11 = (BUF_MEM *)((int64_t)&param_1->length + 1);
          file = "";
          bVar10 = 0;
        }
        pBVar17 = pBVar11;
        if (-1 < (char)bVar3) {
          pBVar17 = (BUF_MEM *)((int64_t)&pBVar11->length + 2);
          do {
            pBVar12 = pBVar17;
            if ((*(ushort *)(lVar13 + (uint64_t)bVar3 * 2) & 0x107) == 0) {
              puVar18 = &pBVar12[-1].field_0x16;
              pBVar17 = (BUF_MEM *)puVar18;
              if (bVar3 != 0x3a) goto LAB_00fb0386;
              if (pBVar12[-1].field_0x17 != ':') {
                bVar3 = 0x3a;
                goto LAB_00fb0386;
              }
              pBVar12[-1].field_0x16 = 0;
              bVar3 = (byte)pBVar12->length;
              uVar2 = 0x3a;
              pBVar17 = pBVar12;
              if ((char)bVar3 < '\0') {
                *(char *)&pBVar12->length = '\0';
                goto joined_r0x00fb048f;
              }
              goto LAB_00fb0364;
            }
            bVar3 = pBVar12[-1].field_0x17;
            pBVar17 = (BUF_MEM *)((int64_t)&pBVar12->length + 1);
          } while (-1 < (char)bVar3);
          pBVar17 = (BUF_MEM *)&pBVar12[-1].field_0x17;
        }
LAB_00fb0386:
        puVar18 = (void*)0x0;
        pBVar12 = pBVar11;
        goto LAB_00fb0390;
      }
LAB_00fb049a:
      pvVar14 = (void *)(int64_t)iVar5;
      pBVar8->data[(int64_t)pvVar14] = '\0';
      _CRYPTO_free(pvVar14);
      *param_2 = pBVar8->data;
      _CRYPTO_free(pvVar14);
      uVar16 = 1;
    }
  }
  return uVar16;
code_r0x00fb021c:
  lVar13 = 2;
LAB_00fb0275:
  param_1 = (BUF_MEM *)((int64_t)&param_1->length + (uint64_t)(bVar10 == bVar3) + lVar13);
  goto LAB_00fb0152;
  while( true ) {
    bVar3 = *(byte *)((int64_t)&pBVar17->length + 1);
    pBVar17 = (BUF_MEM *)((int64_t)&pBVar17->length + 1);
    if ((char)bVar3 < '\0') break;
LAB_00fb0364:
    if ((*(ushort *)(*(int64_t *)(this_ptr + 8) + (uint64_t)bVar3 * 2) & 0x107) == 0) break;
  }
LAB_00fb0390:
  *(char *)&pBVar17->length = '\0';
joined_r0x00fb048f:
  iVar7 = (int)pBVar12;
  pBVar11 = pBVar17;
  if ((char)file == '\0') {
    if (bVar10 != bVar3) {
      iVar5 = 0x66;
      iVar7 = 0x26a;
      goto LAB_00fb0557;
    }
    pBVar11 = (BUF_MEM *)((int64_t)&pBVar17->length + 1);
  }
  pcVar9 = (char *)__CONF_get_string();
  line = (int)arg1;
  if (puVar18 != (void*)0x0) {
    *puVar18 = uVar2;
  }
  *(byte *)&pBVar17->length = bVar3;
  if (pcVar9 == (char *)0x0) {
    iVar5 = 0x68;
    iVar7 = 0x27e;
  }
  else {
    pBVar12 = pBVar17;
    sVar6 = _strlen((char *)pBVar17);
    line = (int)arg1;
    if ((char *)((int64_t)param_1 +
                *(int64_t *)pBVar8 + (CONCAT44(extraout_var_00,sVar6) - (int64_t)pBVar11)) <
        (char *)0x10001) {
      iVar7 = _BUF_MEM_grow_clean(pBVar12,iVar7);
      line = (int)arg1;
      if (CONCAT44(extraout_var_01,iVar7) != 0) {
        cVar4 = *pcVar9;
        param_1 = pBVar11;
        if (cVar4 == '\0') {
          *(byte *)&pBVar17->length = bVar3;
        }
        else {
          lVar13 = (int64_t)iVar5;
          do {
            pcVar9 = pcVar9 + 1;
            pBVar8->data[lVar13] = cVar4;
            lVar13 = lVar13 + 1;
            cVar4 = *pcVar9;
            uVar19 = (uint64_t)((int)uVar19 + 1);
          } while (cVar4 != '\0');
          *(byte *)&pBVar17->length = bVar3;
        }
        goto LAB_00fb0152;
      }
      iVar5 = 0x41;
      iVar7 = 0x287;
    }
    else {
      iVar5 = 0x74;
      iVar7 = 0x283;
    }
  }
LAB_00fb0557:
  pcVar9 = "crypto/conf/conf_def.c";
  _ERR_put_error(0x200b783,iVar5,iVar7,file,line);
  goto LAB_00fb055e;
}

