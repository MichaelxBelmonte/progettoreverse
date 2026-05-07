// Function: FUN_010ba790
// Address: 010ba790
// Size: 584 bytes
// Class: Unknown

void* FUN_010ba790(ASN1_ITEM *param_1,int64_t param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void*puVar7;
  ASN1_VALUE *pAVar8;
  ASN1_VALUE *pAVar9;
  ASN1_BIT_STRING *pAVar10;
  ASN1_TEMPLATE *pAVar11;
  uint64_t uVar12;
  int64_t lVar13;
  ASN1_ITEM *pAVar14;
  ASN1_ITEM *a;
  ASN1_ITEM *it;
  int64_t arg1;
  void*this_ptr;
  uint uVar15;
  uint64_t uVar16;
  
  it = (ASN1_ITEM *)((uint64_t)param_1 & 0xffffffff);
  pAVar14 = param_1;
  iVar5 = FUN_010baf90();
  if (-1 < iVar5) {
    puVar7 = (void*)FUN_010ba580();
    return puVar7;
  }
  pAVar8 = _ASN1_item_new(pAVar14);
  pAVar14 = (ASN1_ITEM *)0x0;
  if (pAVar8 == (ASN1_VALUE *)0x0) {
    return (void*)0x0;
  }
  *(void*)pAVar8 = 1;
  pAVar9 = _ASN1_item_new((ASN1_ITEM *)0x0);
  *(ASN1_VALUE **)(pAVar8 + 8) = pAVar9;
  if (pAVar9 != (ASN1_VALUE *)0x0) {
    if (*(int64_t *)pAVar9 == 0) {
      pAVar10 = _ASN1_BIT_STRING_new();
      pAVar14 = *(ASN1_ITEM **)(pAVar8 + 8);
      *(ASN1_BIT_STRING **)pAVar14 = pAVar10;
      if (pAVar10 == (ASN1_BIT_STRING *)0x0) goto LAB_010ba9b9;
      lVar13 = *(int64_t *)(*(int64_t *)(pAVar8 + 8) + 8);
    }
    else {
      lVar13 = *(int64_t *)(pAVar9 + 8);
    }
    if (lVar13 == 0) {
      pAVar11 = (ASN1_TEMPLATE *)_ASN1_BIT_STRING_new();
      pAVar14 = *(ASN1_ITEM **)(pAVar8 + 8);
      pAVar14->templates = pAVar11;
      if (pAVar11 == (ASN1_TEMPLATE *)0x0) goto LAB_010ba9b9;
    }
    uVar16 = (uint64_t)param_1 & 0xffffffff;
    a = (ASN1_ITEM *)0x0;
    uVar12 = uVar16;
    if ((int)param_1 < 0) {
      a = (ASN1_ITEM *)((uint64_t)param_1 & 0xffffffff);
    }
    do {
      iVar5 = (int)uVar12;
      if (iVar5 < 1) {
        uVar15 = (uint)a;
        goto LAB_010ba89e;
      }
      uVar1 = uVar12 - 1;
      pcVar3 = (char *)(arg1 + -1 + uVar12);
      uVar12 = uVar1;
    } while (*pcVar3 == '\0');
    uVar15 = (int)uVar1 + 1;
LAB_010ba89e:
    it = (ASN1_ITEM *)(uint64_t)uVar15;
    pAVar14 = a;
    iVar6 = _ASN1_BIT_STRING_set((ASN1_BIT_STRING *)a,(uchar *)it,param_3);
    if (iVar6 != 0) {
      *(uint64_t *)(**(int64_t **)(pAVar8 + 8) + 0x10) =
           *(uint64_t *)(**(int64_t **)(pAVar8 + 8) + 0x10) & 0xfffffffffffffff8;
      *(uint64_t *)(**(int64_t **)(pAVar8 + 8) + 0x10) =
           *(uint64_t *)(**(int64_t **)(pAVar8 + 8) + 0x10) | 8;
      if (0 < iVar5) {
        lVar13 = -8;
        do {
          cVar4 = (char)lVar13;
          lVar13 = lVar13 + 1;
        } while ((char)(*(char *)(arg1 + (uint64_t)(uVar15 - 1)) << (cVar4 + 9U & 0x1f)) !=
                 '\0');
        pAVar14 = (ASN1_ITEM *)**(int64_t **)(pAVar8 + 8);
        *(uint64_t *)&pAVar14->tcount = *(uint64_t *)&pAVar14->tcount | -lVar13;
      }
      do {
        iVar5 = (int)uVar16;
        if (iVar5 < 1) goto LAB_010ba93c;
        uVar12 = uVar16 - 1;
        pcVar3 = (char *)(param_2 + -1 + uVar16);
        uVar16 = uVar12;
      } while (*pcVar3 == -1);
      a = (ASN1_ITEM *)(uint64_t)((int)uVar12 + 1);
LAB_010ba93c:
      it = a;
      iVar6 = _ASN1_BIT_STRING_set((ASN1_BIT_STRING *)pAVar14,(uchar *)a,param_3);
      if (iVar6 != 0) {
        puVar2 = (uint64_t *)(*(int64_t *)(*(int64_t *)(pAVar8 + 8) + 8) + 0x10);
        *puVar2 = *puVar2 & 0xfffffffffffffff8;
        puVar2 = (uint64_t *)(*(int64_t *)(*(int64_t *)(pAVar8 + 8) + 8) + 0x10);
        *puVar2 = *puVar2 | 8;
        if (0 < iVar5) {
          lVar13 = -8;
          do {
            cVar4 = (char)lVar13;
            lVar13 = lVar13 + 1;
          } while ((char)(~(uint)*(byte *)(param_2 + (uint64_t)((int)a - 1)) << (cVar4 + 9U & 0x1f)
                         ) != '\0');
          puVar2 = (uint64_t *)(*(int64_t *)(*(int64_t *)(pAVar8 + 8) + 8) + 0x10);
          *puVar2 = *puVar2 | -lVar13;
        }
        *this_ptr = pAVar8;
        return (void*)((int64_t)&MACH_HEADER.magic + 1);
      }
    }
  }
LAB_010ba9b9:
  _ASN1_item_free((ASN1_VALUE *)pAVar14,it);
  return (void*)0x0;
}

