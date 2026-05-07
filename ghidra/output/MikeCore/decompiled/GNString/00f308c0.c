// Function: FUN_00f308c0
// Address: 00f308c0
// Size: 916 bytes
// Class: GNString
// String references:
//   "UTF-8"
//   "UTF8"


char * FUN_00f308c0(char *param_1,undefined4 *param_2)

{
  __darwin_ct_rune_t _Var1;
  __darwin_ct_rune_t _Var2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  char *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  *(undefined1 *)(unaff_RDI + 0x50) = 0;
  *(undefined4 *)(unaff_RDI + 0x54) = 0;
  pcVar6 = param_1;
  FUN_00f2d870(param_1,0);
  *(undefined8 *)(unaff_RDI + 100) = 0;
  if ((unaff_RSI != (char *)0x0) && (*unaff_RSI != '\0')) {
    *(undefined8 *)(unaff_RDI + 8) = 0xffffffffffffffff;
    if (param_2 == (undefined4 *)0x0) {
      local_50 = 0;
      pcVar6 = (char *)0x0;
    }
    else {
      local_50 = *param_2;
      pcVar6 = (char *)(ulonglong)(uint)param_2[1];
    }
    uStack_4c = SUB84(pcVar6,0);
    *(ulonglong *)(unaff_RDI + 8) = CONCAT44(uStack_4c,local_50);
    pcVar7 = (char *)((ulonglong)param_1 & 0xffffffff);
    if ((int)param_1 == 0) {
      pcVar7 = (char *)0x0;
      if (((*unaff_RSI == -0x11) && (unaff_RSI[1] == -0x45)) &&
         (pcVar7 = (char *)0x0, unaff_RSI[2] == -0x41)) {
        *(undefined1 *)(unaff_RDI + 0x6c) = 1;
        pcVar7 = (char *)((longlong)&MACH_HEADER.magic + 1);
      }
    }
    pcVar3 = (char *)FUN_00f2fd80();
    if (pcVar3 != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') goto LAB_00f30bfb;
        plVar4 = (longlong *)FUN_00f30cf0();
        if (plVar4 == (longlong *)0x0) goto LAB_00f30bfb;
        pcVar6 = pcVar7;
        (**(code **)(*plVar4 + 0x18))(pcVar7,&local_50);
        FUN_00f2dd10();
        if ((int)pcVar7 == 0) {
          lVar5 = (**(code **)(*plVar4 + 0x78))();
          if (lVar5 == 0) {
            pcVar7 = (char *)0x0;
          }
          else {
            lVar5 = (**(code **)(*plVar4 + 0x78))();
            lVar5 = *(longlong *)(lVar5 + 0x58);
            pcVar7 = (char *)((longlong)&MACH_HEADER.magic + 1);
            if (*(char *)(lVar5 + 0x10) != '\0') {
              _Var1 = ___tolower((__darwin_ct_rune_t)pcVar6);
              _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
              pcVar6 = "UTF-8";
              if ((_Var1 == _Var2) && (pcVar6 = "TF-8", *(char *)(lVar5 + 0x11) != '\0')) {
                _Var1 = ___tolower(0x2006ff3);
                _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                pcVar6 = "TF-8";
                if ((_Var1 == _Var2) && (pcVar6 = "F-8", *(char *)(lVar5 + 0x12) != '\0')) {
                  _Var1 = ___tolower(0x2006ff4);
                  _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                  pcVar6 = "F-8";
                  if ((_Var1 == _Var2) && (pcVar6 = "-8", *(char *)(lVar5 + 0x13) != '\0')) {
                    _Var1 = ___tolower(0x2006ff5);
                    _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                    pcVar6 = "-8";
                    if ((_Var1 == _Var2) && (pcVar6 = "8", *(char *)(lVar5 + 0x14) != '\0')) {
                      _Var1 = ___tolower(0x2006ff6);
                      _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                      pcVar6 = "8";
                      if ((_Var1 == _Var2) && (pcVar6 = "", *(char *)(lVar5 + 0x15) != '\0'))
                      goto LAB_00f30990;
                    }
                  }
                }
              }
              if (*pcVar6 != '\0') {
                if (*(char *)(lVar5 + 0x10) == '\0') {
                  pcVar7 = (char *)((longlong)&MACH_HEADER.magic + 2);
                }
                else {
                  _Var1 = ___tolower((__darwin_ct_rune_t)pcVar6);
                  _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                  pcVar6 = "UTF8";
                  if ((_Var1 == _Var2) && (pcVar6 = "TF8", *(char *)(lVar5 + 0x11) != '\0')) {
                    _Var1 = ___tolower(0x2006ff9);
                    _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                    pcVar6 = "TF8";
                    if ((_Var1 == _Var2) && (pcVar6 = "F8", *(char *)(lVar5 + 0x12) != '\0')) {
                      _Var1 = ___tolower(0x2006ffa);
                      _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                      pcVar6 = "F8";
                      if ((_Var1 == _Var2) && (pcVar6 = "8", *(char *)(lVar5 + 0x13) != '\0')) {
                        _Var1 = ___tolower(0x2006ffb);
                        _Var2 = ___tolower((__darwin_ct_rune_t)pcVar6);
                        pcVar6 = "8";
                        if ((_Var1 == _Var2) && (pcVar6 = "", *(char *)(lVar5 + 0x14) != '\0'))
                        goto LAB_00f30990;
                      }
                    }
                  }
                  pcVar7 = (char *)(ulonglong)(2 - (*pcVar6 == '\0'));
                }
              }
            }
          }
        }
LAB_00f30990:
        pcVar3 = (char *)FUN_00f2fd80();
      } while (pcVar3 != (char *)0x0);
      pcVar3 = (char *)0x0;
LAB_00f30bfb:
      if (*(longlong *)(unaff_RDI + 0x28) != 0) {
        return pcVar3;
      }
    }
  }
  if (*(char *)(unaff_RDI + 0x50) == '\0') {
    *(undefined1 *)(unaff_RDI + 0x50) = 1;
    *(undefined4 *)(unaff_RDI + 0x54) = 0xc;
    _strlen(pcVar6);
    FUN_00f2d870();
    *(undefined8 *)(unaff_RDI + 100) = 0xffffffffffffffff;
  }
  return (char *)0x0;
}


