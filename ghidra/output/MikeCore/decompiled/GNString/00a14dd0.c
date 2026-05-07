// Function: FUN_00a14dd0
// Address: 00a14dd0
// Size: 519 bytes
// Class: GNString


longlong FUN_00a14dd0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined1 *puVar6;
  void *pvVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar10;
  size_t sVar11;
  longlong lVar12;
  undefined1 *puVar13;
  void *pvVar14;
  
  lVar9 = param_1 - param_2;
  lVar12 = unaff_RSI;
  if (0 < lVar9) {
    puVar13 = (undefined1 *)unaff_RDI[1];
    pvVar5 = (void *)(unaff_RDI[2] - (longlong)puVar13);
    sVar11 = (size_t)unaff_RDI;
    if ((longlong)pvVar5 < lVar9) {
      pvVar5 = (void *)*unaff_RDI;
      puVar13 = puVar13 + (lVar9 - (longlong)pvVar5);
      if ((longlong)puVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar1 = unaff_RDI[2] - (longlong)pvVar5;
      puVar4 = (undefined1 *)(uVar1 * 2);
      if (puVar4 < puVar13) {
        puVar4 = puVar13;
      }
      puVar13 = (undefined1 *)0x7fffffffffffffff;
      if (uVar1 < 0x3fffffffffffffff) {
        puVar13 = puVar4;
      }
      lVar12 = unaff_RSI - (longlong)pvVar5;
      if (puVar13 == (undefined1 *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = operator_new((ulong)pvVar5);
      }
      lVar12 = lVar12 + (longlong)pvVar2;
      lVar10 = lVar12 + lVar9;
      lVar3 = 0;
      do {
        pvVar5 = (void *)CONCAT71((int7)((ulonglong)pvVar5 >> 8),*(undefined1 *)(param_2 + lVar3));
        *(undefined1 *)(lVar12 + lVar3) = *(undefined1 *)(param_2 + lVar3);
        lVar3 = lVar3 + 1;
      } while (lVar9 != lVar3);
      lVar9 = *unaff_RDI;
      pvVar7 = (void *)(unaff_RSI - lVar9);
      if (0 < (longlong)pvVar7) {
        _memcpy(pvVar5,pvVar7,sVar11);
      }
      pvVar14 = (void *)(unaff_RDI[1] - unaff_RSI);
      if (0 < (longlong)pvVar14) {
        _memcpy(pvVar5,pvVar14,sVar11);
        lVar10 = lVar10 + (longlong)pvVar14;
      }
      *unaff_RDI = lVar12 - (longlong)pvVar7;
      unaff_RDI[1] = lVar10;
      unaff_RDI[2] = (longlong)(puVar13 + (longlong)pvVar2);
      if (lVar9 != 0) {
        operator_delete(pvVar5);
      }
    }
    else {
      lVar3 = (longlong)puVar13 - unaff_RSI;
      puVar4 = puVar13;
      lVar10 = param_1;
      if (lVar3 < lVar9) {
        lVar10 = param_2 + lVar3;
        pvVar2 = (void *)(param_1 - lVar10);
        if (0 < (longlong)pvVar2) {
          _memcpy(pvVar5,pvVar2,sVar11);
          puVar4 = (undefined1 *)((longlong)pvVar2 + (longlong)puVar13);
        }
        unaff_RDI[1] = (longlong)puVar4;
        if (lVar3 < 1) {
          return unaff_RSI;
        }
      }
      puVar8 = puVar4 + -(unaff_RSI + lVar9);
      puVar6 = puVar4 + -lVar9;
      if (puVar6 < puVar13) {
        do {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        } while (puVar13 != puVar6);
      }
      unaff_RDI[1] = (longlong)puVar4;
      if (puVar8 != (undefined1 *)0x0) {
        _memmove(puVar6,puVar8,sVar11);
      }
      if ((void *)(lVar10 - param_2) != (void *)0x0) {
        _memmove(puVar6,(void *)(lVar10 - param_2),(size_t)unaff_RDI);
      }
    }
  }
  return lVar12;
}


