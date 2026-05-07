// Function: FUN_009a23b8
// Address: 009a23b8
// Size: 3205 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The given connection ID 0x%08X for the default connection is not a supported value."
//   "static void pace::ILok2Commander::getDefaultKey(uint32_t, vector<uint8_t> &)"


void FUN_009a23b8(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong *unaff_RSI;
  int unaff_EDI;
  
  if (unaff_EDI == 0x2a9f3eff) {
    plVar1 = unaff_RSI + 1;
    unaff_RSI[1] = *unaff_RSI;
    FUN_009a7716();
    puVar7 = (undefined1 *)unaff_RSI[1];
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x7c;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x7c;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x83;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x83;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xe5;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xe5;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xba;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xba;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x4e;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x4e;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x11;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x11;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x1b;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x1b;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 9;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 9;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xea;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xea;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xaa;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xaa;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x40;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x40;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xf7;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xf7;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xe;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xe;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0x97;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0x97;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xde;
      puVar7 = puVar7 + 1;
      *plVar1 = (longlong)puVar7;
    }
    else {
      lVar2 = *unaff_RSI;
      puVar5 = puVar7 + -lVar2;
      puVar7 = puVar5 + 1;
      if ((longlong)puVar7 < 0) goto LAB_009a3035;
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar7) {
        puVar8 = puVar7;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      puVar7 = puVar5 + (longlong)pvVar4 + 1;
      puVar7[-1] = 0xde;
      if (0 < (longlong)puVar5) {
        _memcpy(pvVar6,puVar5,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)puVar7;
      unaff_RSI[2] = (longlong)(puVar8 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        puVar7 = (undefined1 *)*plVar1;
      }
    }
    if (puVar7 < (undefined1 *)unaff_RSI[2]) {
      *puVar7 = 0xd2;
      *plVar1 = (longlong)(puVar7 + 1);
    }
    else {
      lVar2 = *unaff_RSI;
      puVar7 = puVar7 + -lVar2;
      puVar5 = puVar7 + 1;
      if ((longlong)puVar5 < 0) {
LAB_009a3035:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar3 = unaff_RSI[2] - lVar2;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar5) {
        puVar8 = puVar5;
      }
      pvVar6 = (void *)0x3fffffffffffffff;
      puVar5 = (undefined1 *)0x7fffffffffffffff;
      if (uVar3 < 0x3fffffffffffffff) {
        puVar5 = puVar8;
      }
      if (puVar5 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(0xffffffff);
      }
      (puVar7 + (longlong)pvVar4 + 1)[-1] = 0xd2;
      if (0 < (longlong)puVar7) {
        _memcpy(pvVar6,puVar7,param_3);
      }
      *unaff_RSI = (longlong)pvVar4;
      unaff_RSI[1] = (longlong)(puVar7 + (longlong)pvVar4 + 1);
      unaff_RSI[2] = (longlong)(puVar5 + (longlong)pvVar4);
      if (lVar2 != 0) {
        operator_delete(pvVar6);
        return;
      }
    }
  }
  else {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static void pace::ILok2Commander::getDefaultKey(uint32_t, vector<uint8_t> &)",
                 &DAT_000016b9);
    FUN_009c720b();
  }
  return;
}


