// Function: FUN_00980652
// Address: 00980652
// Size: 532 bytes
// Class: Unknown


undefined1 * FUN_00980652(undefined8 param_1,undefined1 *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_40;
  
  puVar5 = (undefined1 *)unaff_RDI[1];
  if (puVar5 < (undefined1 *)unaff_RDI[2]) {
    puVar7 = unaff_RSI;
    if (puVar5 == unaff_RSI) {
      *unaff_RSI = *param_2;
      unaff_RDI[1] = (longlong)(unaff_RSI + 1);
    }
    else {
      puVar6 = puVar5 + -(longlong)(unaff_RSI + 1);
      if (puVar5 + -1 < puVar5) {
        lVar4 = 0;
        do {
          puVar5[lVar4] = (puVar5 + -1)[lVar4];
          lVar4 = lVar4 + 1;
        } while ((longlong)(unaff_RSI + 1) - (longlong)unaff_RSI != lVar4);
        puVar5 = puVar5 + lVar4;
      }
      unaff_RDI[1] = (longlong)puVar5;
      if (puVar6 != (undefined1 *)0x0) {
        _memmove(puVar5,puVar6,param_3);
      }
      if ((unaff_RSI <= param_2) && (param_2 < (undefined1 *)unaff_RDI[1])) {
        param_2 = param_2 + 1;
      }
      *unaff_RSI = *param_2;
    }
  }
  else {
    lVar4 = *unaff_RDI;
    puVar5 = puVar5 + (1 - lVar4);
    if ((longlong)puVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar1 = unaff_RDI[2] - lVar4;
    puVar6 = (undefined1 *)(uVar1 * 2);
    if (puVar6 < puVar5) {
      puVar6 = puVar5;
    }
    puVar5 = (undefined1 *)0x7fffffffffffffff;
    if (uVar1 < 0x3fffffffffffffff) {
      puVar5 = puVar6;
    }
    if (puVar5 == (undefined1 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = operator_new((ulong)puVar6);
    }
    puVar7 = (undefined1 *)((longlong)pvVar2 + (longlong)(unaff_RSI + -lVar4));
    local_40 = (undefined1 *)((longlong)pvVar2 + (longlong)puVar5);
    if (unaff_RSI + -lVar4 == puVar5) {
      if ((longlong)puVar5 < 1) {
        uVar1 = 1;
        if ((longlong)puVar5 * 2 != 0) {
          uVar1 = (longlong)puVar5 * 2;
        }
        pvVar3 = operator_new((ulong)puVar6);
        puVar7 = (undefined1 *)((uVar1 >> 2) + (longlong)pvVar3);
        local_40 = (undefined1 *)((longlong)pvVar3 + uVar1);
        if (pvVar2 != (void *)0x0) {
          operator_delete(puVar6);
          lVar4 = *unaff_RDI;
        }
      }
      else {
        puVar6 = (undefined1 *)-((longlong)(puVar7 + (1 - (longlong)pvVar2)) >> 0x3f);
        puVar7 = puVar7 + -((longlong)(puVar7 + (1 - (longlong)pvVar2) + (longlong)puVar6) >> 1);
      }
    }
    *puVar7 = *param_2;
    puVar5 = unaff_RSI + -lVar4;
    if (0 < (longlong)puVar5) {
      _memcpy(puVar6,puVar5,param_3);
    }
    puVar8 = puVar7 + 1;
    pvVar2 = (void *)(unaff_RDI[1] - (longlong)unaff_RSI);
    if (0 < (longlong)pvVar2) {
      _memcpy(puVar6,pvVar2,param_3);
      puVar8 = puVar8 + (longlong)pvVar2;
    }
    lVar4 = *unaff_RDI;
    *unaff_RDI = (longlong)puVar7 - (longlong)puVar5;
    unaff_RDI[1] = (longlong)puVar8;
    unaff_RDI[2] = (longlong)local_40;
    if (lVar4 != 0) {
      operator_delete(puVar6);
    }
  }
  return puVar7;
}


