// Function: FUN_00f308c0
// Address: 00f308c0
// Size: 916 bytes
// Class: GNString
// String references:
//   "UTF-8"
//   "UTF8"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


char * FUN_00f308c0(char *param_1,void*param_2)

{
  __darwin_ct_rune_t _Var1;
  __darwin_ct_rune_t _Var2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char *pcVar6;
  char *arg1;
  int64_t this_ptr;
  char *pcVar7;
  uint32_t local_50;
  uint32_t uStack_4c;
  
  *(void*)(this_ptr + 0x50) = 0;
  *(void*)(this_ptr + 0x54) = 0;
  pcVar6 = param_1;
  FUN_00f2d870(param_1,0);
  *(void*)(this_ptr + 100) = 0;
  if ((arg1 != (char *)0x0) && (*arg1 != '\0')) {
    *(void*)(this_ptr + 8) = 0xffffffffffffffff;
    if (param_2 == (void*)0x0) {
      local_50 = 0;
      pcVar6 = (char *)0x0;
    }
    else {
      local_50 = *param_2;
      pcVar6 = (char *)(uint64_t)(uint)param_2[1];
    }
    uStack_4c = SUB84(pcVar6,0);
    *(uint64_t *)(this_ptr + 8) = CONCAT44(uStack_4c,local_50);
    pcVar7 = (char *)((uint64_t)param_1 & 0xffffffff);
    if ((int)param_1 == 0) {
      pcVar7 = (char *)0x0;
      if (((*arg1 == -0x11) && (arg1[1] == -0x45)) &&
         (pcVar7 = (char *)0x0, arg1[2] == -0x41)) {
        *(void*)(this_ptr + 0x6c) = 1;
        pcVar7 = (char *)((int64_t)&MACH_HEADER.magic + 1);
      }
    }
    pcVar3 = (char *)FUN_00f2fd80();
    if (pcVar3 != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') goto LAB_00f30bfb;
        plVar4 = (int64_t *)FUN_00f30cf0();
        if (plVar4 == (int64_t *)0x0) goto LAB_00f30bfb;
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
            lVar5 = *(int64_t *)(lVar5 + 0x58);
            pcVar7 = (char *)((int64_t)&MACH_HEADER.magic + 1);
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
                  pcVar7 = (char *)((int64_t)&MACH_HEADER.magic + 2);
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
                  pcVar7 = (char *)(uint64_t)(2 - (*pcVar6 == '\0'));
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
      if (*(int64_t *)(this_ptr + 0x28) != 0) {
        return pcVar3;
      }
    }
  }
  if (*(char *)(this_ptr + 0x50) == '\0') {
    *(void*)(this_ptr + 0x50) = 1;
    *(void*)(this_ptr + 0x54) = 0xc;
    _strlen(pcVar6);
    FUN_00f2d870();
    *(void*)(this_ptr + 100) = 0xffffffffffffffff;
  }
  return (char *)0x0;
}

