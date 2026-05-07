// Function: FUN_00f32580
// Address: 00f32580
// Size: 2441 bytes
// Class: Unknown
// String references:
//   "<?xml"
//   "encoding"
//   "standalone"
//   "version"


byte * FUN_00f32580(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  __darwin_ct_rune_t _Var2;
  __darwin_ct_rune_t _Var3;
  uint uVar4;
  size_t sVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong unaff_RDI;
  byte *pbVar10;
  char cVar11;
  char *pcVar12;
  ulonglong uVar13;
  
  pcVar9 = param_1;
  pcVar6 = (char *)FUN_00f2fd80();
  lVar7 = FUN_00f2df60();
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_00f326a0:
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x50) == '\0')) {
      *(undefined1 *)(lVar7 + 0x50) = 1;
      *(undefined4 *)(lVar7 + 0x54) = 0xb;
      _strlen(pcVar9);
      FUN_00f2d870();
      *(undefined8 *)(lVar7 + 100) = 0xffffffffffffffff;
    }
  }
  else {
    _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
    _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
    if (_Var2 == _Var3) {
      pcVar12 = "?xml";
      if (pcVar6[1] == '\0') goto LAB_00f3269a;
      _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
      _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
      if ((_Var2 != _Var3) || (pcVar12 = "xml", pcVar6[2] == '\0')) goto LAB_00f3269a;
      _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
      _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
      if ((_Var2 != _Var3) || (pcVar12 = "ml", pcVar6[3] == '\0')) goto LAB_00f3269a;
      _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
      _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
      if ((_Var2 != _Var3) || (pcVar12 = "l", pcVar6[4] == '\0')) goto LAB_00f3269a;
      _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
      _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
      if (_Var2 != _Var3) goto LAB_00f3269a;
      if (pcVar6[5] == '\0') {
        pcVar12 = "";
        goto LAB_00f3269a;
      }
    }
    else {
      pcVar12 = "<?xml";
LAB_00f3269a:
      if (*pcVar12 != '\0') goto LAB_00f326a0;
    }
    if (param_2 != (undefined8 *)0x0) {
      FUN_00f2fb40();
      *(undefined8 *)(unaff_RDI + 8) = *param_2;
    }
    pbVar10 = (byte *)(pcVar6 + 5);
    FUN_00f2d870();
    FUN_00f2d870();
    uVar8 = 0;
    FUN_00f2d870();
    puVar1 = PTR___DefaultRuneLocale_0249c238;
    do {
      if (*pbVar10 == 0) {
        return (byte *)0x0;
      }
      if (*pbVar10 == 0x3e) {
        return pbVar10 + 1;
      }
      pbVar10 = (byte *)FUN_00f2fd80();
      _Var2 = (__darwin_ct_rune_t)pcVar9;
      if (pbVar10 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (*pbVar10 == 0) {
LAB_00f32ce0:
        uVar13 = (ulonglong)*pbVar10;
        if (uVar13 != 0) {
          while (cVar11 = (char)uVar13, cVar11 != '>') {
            if (cVar11 < '\0') {
              uVar4 = ___maskrune((__darwin_ct_rune_t)pcVar9,(ulong)uVar8);
            }
            else {
              uVar4 = *(uint *)(puVar1 + uVar13 * 4 + 0x3c) & 0x4000;
            }
            if (((uVar4 != 0) || (cVar11 == '\n')) || (cVar11 == '\r')) break;
            pbVar10 = pbVar10 + 1;
            uVar13 = (ulonglong)*pbVar10;
            if (uVar13 == 0) break;
          }
        }
      }
      else {
        _Var3 = ___tolower(_Var2);
        _Var2 = ___tolower(_Var2);
        pcVar9 = "version";
        if ((_Var3 == _Var2) && (pcVar9 = "ersion", pbVar10[1] != 0)) {
          _Var2 = ___tolower(0x201ad8e);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "ersion";
          if ((_Var2 != _Var3) || (pcVar9 = "rsion", pbVar10[2] == 0)) goto LAB_00f32920;
          _Var2 = ___tolower(0x201ad8f);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "rsion";
          if ((_Var2 != _Var3) || (pcVar9 = "sion", pbVar10[3] == 0)) goto LAB_00f32920;
          _Var2 = ___tolower(0x201ad90);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "sion";
          if ((_Var2 != _Var3) || (pcVar9 = "ion", pbVar10[4] == 0)) goto LAB_00f32920;
          _Var2 = ___tolower(0x201ad91);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "ion";
          if ((_Var2 != _Var3) || (pcVar9 = "on", pbVar10[5] == 0)) goto LAB_00f32920;
          _Var2 = ___tolower(0x201ad92);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "on";
          if ((_Var2 != _Var3) || (pcVar9 = "n", pbVar10[6] == 0)) goto LAB_00f32920;
          _Var2 = ___tolower(0x201ad93);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "n";
          if ((_Var2 != _Var3) || (pcVar9 = "", pbVar10[7] == 0)) goto LAB_00f32920;
LAB_00f32d50:
          pcVar9 = (char *)((ulonglong)param_1 & 0xffffffff);
          pbVar10 = (byte *)FUN_00f31e20(pcVar9,param_2);
          sVar5 = _strlen(pcVar9);
          uVar8 = (ulonglong)sVar5;
          FUN_00f2d870();
LAB_00f32e22:
          if ((undefined8 *)PTR_DAT_0249c250 != &DAT_02802e90) {
            operator_delete__(pcVar9);
          }
          if ((undefined8 *)PTR_DAT_0249c250 == &DAT_02802e90) goto LAB_00f32780;
        }
        else {
LAB_00f32920:
          if (*pcVar9 == '\0') goto LAB_00f32d50;
          if (*pbVar10 == 0) goto LAB_00f32ce0;
          _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "encoding";
          if ((_Var2 == _Var3) && (pcVar9 = "ncoding", pbVar10[1] != 0)) {
            _Var2 = ___tolower(0x2007020);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "ncoding";
            if ((_Var2 != _Var3) || (pcVar9 = "coding", pbVar10[2] == 0)) goto LAB_00f32ac0;
            _Var2 = ___tolower(0x2007021);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "coding";
            if ((_Var2 != _Var3) || (pcVar9 = "oding", pbVar10[3] == 0)) goto LAB_00f32ac0;
            _Var2 = ___tolower(0x2007022);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "oding";
            if ((_Var2 != _Var3) || (pcVar9 = "ding", pbVar10[4] == 0)) goto LAB_00f32ac0;
            _Var2 = ___tolower(0x2007023);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "ding";
            if ((_Var2 != _Var3) || (pcVar9 = "ing", pbVar10[5] == 0)) goto LAB_00f32ac0;
            _Var2 = ___tolower(0x2007024);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "ing";
            if ((_Var2 != _Var3) || (pcVar9 = "ng", pbVar10[6] == 0)) goto LAB_00f32ac0;
            _Var2 = ___tolower(0x2007025);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "ng";
            if ((_Var2 != _Var3) || (pcVar9 = "g", pbVar10[7] == 0)) goto LAB_00f32ac0;
            _Var2 = ___tolower(0x2007026);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "g";
            if ((_Var2 != _Var3) || (pcVar9 = "", pbVar10[8] == 0)) goto LAB_00f32ac0;
LAB_00f32dba:
            pcVar9 = (char *)((ulonglong)param_1 & 0xffffffff);
            pbVar10 = (byte *)FUN_00f31e20(pcVar9,param_2);
            sVar5 = _strlen(pcVar9);
            uVar8 = (ulonglong)sVar5;
            FUN_00f2d870();
            goto LAB_00f32e22;
          }
LAB_00f32ac0:
          if (*pcVar9 == '\0') goto LAB_00f32dba;
          if (*pbVar10 == 0) goto LAB_00f32ce0;
          _Var2 = ___tolower((__darwin_ct_rune_t)pcVar9);
          _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
          pcVar9 = "standalone";
          if ((_Var2 == _Var3) && (pcVar9 = "tandalone", pbVar10[1] != 0)) {
            _Var2 = ___tolower(0x2007029);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "tandalone";
            if ((_Var2 != _Var3) || (pcVar9 = "andalone", pbVar10[2] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x200702a);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "andalone";
            if ((_Var2 != _Var3) || (pcVar9 = "ndalone", pbVar10[3] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x200702b);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "ndalone";
            if ((_Var2 != _Var3) || (pcVar9 = "dalone", pbVar10[4] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x200702c);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "dalone";
            if ((_Var2 != _Var3) || (pcVar9 = "alone", pbVar10[5] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x200702d);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "alone";
            if ((_Var2 != _Var3) || (pcVar9 = "lone", pbVar10[6] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x200702e);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "lone";
            if ((_Var2 != _Var3) || (pcVar9 = "one", pbVar10[7] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x200702f);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "one";
            if ((_Var2 != _Var3) || (pcVar9 = "ne", pbVar10[8] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x2007030);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "ne";
            if ((_Var2 != _Var3) || (pcVar9 = "e", pbVar10[9] == 0)) goto LAB_00f32cc8;
            _Var2 = ___tolower(0x2007031);
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar9);
            pcVar9 = "e";
            if ((_Var2 != _Var3) || (pcVar9 = "", pbVar10[10] == 0)) goto LAB_00f32cc8;
          }
          else {
LAB_00f32cc8:
            if (*pcVar9 != '\0') goto LAB_00f32ce0;
          }
          pcVar9 = (char *)((ulonglong)param_1 & 0xffffffff);
          pbVar10 = (byte *)FUN_00f31e20(pcVar9,param_2);
          sVar5 = _strlen(pcVar9);
          uVar8 = (ulonglong)sVar5;
          FUN_00f2d870();
          if ((undefined8 *)PTR_DAT_0249c250 != &DAT_02802e90) {
            operator_delete__(pcVar9);
          }
          if ((undefined8 *)PTR_DAT_0249c250 == &DAT_02802e90) goto LAB_00f32780;
        }
        operator_delete__(pcVar9);
      }
LAB_00f32780:
    } while (pbVar10 != (byte *)0x0);
  }
  return (byte *)0x0;
}


