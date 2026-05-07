// Function: FUN_00f30cf0
// Address: 00f30cf0
// Size: 853 bytes
// Class: Unknown
// String references:
//   "<?xml"
//   "<![CDATA["

void* FUN_00f30cf0(void*param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  __darwin_ct_rune_t _Var4;
  __darwin_ct_rune_t _Var5;
  char *pcVar6;
  void*puVar7;
  void*puVar8;
  ulong uVar9;
  uint64_t uVar10;
  char cVar12;
  uint64_t this_ptr;
  char *pcVar13;
  undefined7 uVar11;
  
  pcVar6 = (char *)FUN_00f2fd80();
  if ((((pcVar6 == (char *)0x0) || (*pcVar6 != '<')) ||
      (pcVar6 = (char *)FUN_00f2fd80(), pcVar6 == (char *)0x0)) || (*pcVar6 == '\0')) {
    return (void*)0x0;
  }
  _Var4 = ___tolower((__darwin_ct_rune_t)param_1);
  _Var5 = ___tolower((__darwin_ct_rune_t)param_1);
  if (_Var4 == _Var5) {
    pcVar13 = "?xml";
    if (pcVar6[1] == '\0') goto LAB_00f30e1b;
    _Var4 = ___tolower((__darwin_ct_rune_t)param_1);
    _Var5 = ___tolower((__darwin_ct_rune_t)param_1);
    if ((_Var4 != _Var5) || (pcVar13 = "xml", pcVar6[2] == '\0')) goto LAB_00f30e1b;
    _Var4 = ___tolower((__darwin_ct_rune_t)param_1);
    _Var5 = ___tolower((__darwin_ct_rune_t)param_1);
    if ((_Var4 != _Var5) || (pcVar13 = "ml", pcVar6[3] == '\0')) goto LAB_00f30e1b;
    _Var4 = ___tolower((__darwin_ct_rune_t)param_1);
    _Var5 = ___tolower((__darwin_ct_rune_t)param_1);
    if ((_Var4 != _Var5) || (pcVar13 = "l", pcVar6[4] == '\0')) goto LAB_00f30e1b;
    _Var4 = ___tolower((__darwin_ct_rune_t)param_1);
    _Var5 = ___tolower((__darwin_ct_rune_t)param_1);
    uVar9 = (ulong)param_1;
    if (_Var4 != _Var5) goto LAB_00f30e1b;
    if (pcVar6[5] == '\0') {
      pcVar13 = "";
      goto LAB_00f30e1b;
    }
  }
  else {
    pcVar13 = "<?xml";
LAB_00f30e1b:
    uVar9 = (ulong)param_1;
    if (*pcVar13 != '\0') {
      cVar1 = *pcVar6;
      if (cVar1 == '\0') {
LAB_00f30fbd:
        bVar2 = pcVar6[1];
        if (((0x7e < (uint64_t)bVar2) ||
            (param_1 = PTR___DefaultRuneLocale_0249c238,
            (PTR___DefaultRuneLocale_0249c238[(uint64_t)bVar2 * 4 + 0x3d] & 1) != 0)) ||
           (bVar2 == 0x5f)) {
          puVar7 = operator_new((ulong)param_1);
          FUN_00f2e0e0();
          goto LAB_00f3103c;
        }
        puVar7 = operator_new((ulong)PTR___DefaultRuneLocale_0249c238);
        FUN_00f2dc20();
LAB_00f3102e:
        puVar8 = &g_02593a78;
      }
      else {
        uVar11 = (undefined7)((uint64_t)param_1 >> 8);
        uVar10 = CONCAT71(uVar11,0x3c);
        uVar9 = (ulong)uVar10;
        if (cVar1 == '<') {
          if (pcVar6[1] == '!') {
            if (pcVar6[2] == '\0') {
              pcVar13 = "--";
              goto LAB_00f30ed3;
            }
            uVar10 = CONCAT71(uVar11,0x2d);
            uVar9 = (ulong)uVar10;
            if (pcVar6[2] == '-') {
              if (pcVar6[3] == '\0') {
                pcVar13 = "-";
                goto LAB_00f30ed3;
              }
              if (pcVar6[3] == '-') {
                if (pcVar6[4] == '\0') {
                  pcVar13 = "";
                  goto LAB_00f30ed3;
                }
                uVar9 = 0;
              }
            }
          }
          else {
            uVar10 = CONCAT71(uVar11,0x21);
            uVar9 = (ulong)uVar10;
            if (pcVar6[1] == '\0') {
              pcVar13 = "!--";
LAB_00f30ed3:
              uVar9 = (ulong)CONCAT71((int7)((uint64_t)uVar10 >> 8),*pcVar13);
            }
          }
        }
        if ((char)uVar9 != '\0') {
          param_1 = (void*)0x0;
          cVar3 = cVar1;
          do {
            puVar8 = param_1;
            cVar12 = puVar8[0x200700b];
            param_1 = puVar8;
            if ((cVar12 == '\0') || (cVar3 != cVar12)) goto LAB_00f30f0d;
            cVar3 = (pcVar6 + 1)[(int64_t)puVar8];
            param_1 = puVar8 + 1;
          } while (cVar3 != '\0');
          cVar12 = puVar8[0x200700c];
LAB_00f30f0d:
          if (cVar12 == '\0') {
            puVar7 = operator_new((ulong)param_1);
            FUN_00f2dc20();
            *puVar7 = &g_025939b8;
            FUN_00f2d870();
            *(void*)(puVar7 + 10) = 1;
            goto LAB_00f3103c;
          }
          cVar3 = '<';
          if (cVar1 == '<') {
            cVar1 = pcVar6[1];
            param_1 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),cVar1);
            if (cVar1 == '!') {
              if (pcVar6[2] == '\0') {
                pcVar13 = "";
                goto LAB_00f30fb7;
              }
              cVar3 = '\0';
            }
            else {
              cVar3 = '!';
              if (cVar1 == '\0') {
                pcVar13 = "!";
LAB_00f30fb7:
                cVar3 = *pcVar13;
              }
            }
          }
          if (cVar3 != '\0') goto LAB_00f30fbd;
          puVar7 = operator_new((ulong)param_1);
          FUN_00f2dc20();
          goto LAB_00f3102e;
        }
        puVar7 = operator_new(uVar9);
        FUN_00f2dc20();
        puVar8 = &g_02593830;
      }
      *puVar7 = puVar8 + 0x10;
      goto LAB_00f3103c;
    }
  }
  puVar7 = operator_new(uVar9);
  FUN_00f2dc20();
  *puVar7 = &g_025938e0;
  puVar7[10] = &g_02802e90;
  puVar7[0xb] = &g_02802e90;
  puVar7[0xc] = &g_02802e90;
LAB_00f3103c:
  puVar7[3] = this_ptr;
  return puVar7;
}

