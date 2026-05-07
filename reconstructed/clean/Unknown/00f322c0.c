// Function: FUN_00f322c0
// Address: 00f322c0
// Size: 669 bytes
// Class: Unknown
// String references:
//   "<![CDATA["
//   "]]>"

char * FUN_00f322c0(char *param_1,void*param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  char *arg1;
  int64_t this_ptr;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00f2d870(param_1,0);
  lVar2 = FUN_00f2df60();
  if (param_2 != (void*)0x0) {
    FUN_00f2fb40();
    *(void*)(this_ptr + 8) = *param_2;
  }
  if (*(char *)(this_ptr + 0x50) == '\0') {
    if ((arg1 != (char *)0x0) &&
       (param_1 = (char *)CONCAT71((int7)((uint64_t)param_1 >> 8),*arg1), *arg1 != '\0'))
    {
      lVar1 = 0;
      do {
        lVar3 = lVar1;
        cVar5 = "<![CDATA["[lVar3];
        if ((cVar5 == '\0') || ((char)param_1 != cVar5)) goto LAB_00f323bd;
        param_1 = (char *)(uint64_t)(byte)arg1[lVar3 + 1];
        lVar1 = lVar3 + 1;
      } while (arg1[lVar3 + 1] != 0);
      cVar5 = "<![CDATA["[lVar3 + 1];
LAB_00f323bd:
      if (cVar5 == '\0') goto LAB_00f32323;
    }
    pcVar6 = (char *)FUN_00f30260("<",1,0);
    pcVar7 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar7 = (char *)0x0;
      if (*pcVar6 != '\0') {
        pcVar7 = pcVar6 + -1;
      }
    }
  }
  else {
LAB_00f32323:
    *(void*)(this_ptr + 0x50) = 1;
    if ((arg1 != (char *)0x0) &&
       (param_1 = (char *)CONCAT71((int7)((uint64_t)param_1 >> 8),*arg1), *arg1 != '\0'))
    {
      lVar1 = 0;
      do {
        lVar3 = lVar1;
        cVar5 = "<![CDATA["[lVar3];
        if ((cVar5 == '\0') || ((char)param_1 != cVar5)) goto LAB_00f3235d;
        param_1 = (char *)(uint64_t)(byte)arg1[lVar3 + 1];
        lVar1 = lVar3 + 1;
      } while (arg1[lVar3 + 1] != 0);
      cVar5 = "<![CDATA["[lVar3 + 1];
LAB_00f3235d:
      if (cVar5 == '\0') {
        pcVar7 = arg1 + 9;
        cVar5 = arg1[9];
        while (cVar5 != '\0') {
          cVar4 = ']';
          if (cVar5 == ']') {
            if (pcVar7[1] == ']') {
              pcVar6 = ">";
              if (pcVar7[2] == '\0') goto LAB_00f324e0;
              cVar4 = '>';
              if (pcVar7[2] == '>') {
                pcVar6 = "";
                if (pcVar7[3] == '\0') goto LAB_00f324e0;
                cVar4 = '\0';
              }
            }
            else {
              pcVar6 = "]>";
              if (pcVar7[1] == '\0') {
LAB_00f324e0:
                cVar4 = *pcVar6;
              }
            }
          }
          if (cVar4 == '\0') break;
          FUN_00f2d920(cVar4,1);
          pcVar6 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar5 = *pcVar6;
        }
        pcVar6 = "]]>";
        pcVar7 = (char *)FUN_00f30260("]]>",0,0);
        if ((void*)PTRg_0249c250 == &g_02802e90) {
          return pcVar7;
        }
        operator_delete__(pcVar6);
        return pcVar7;
      }
    }
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x50) != '\0')) {
      pcVar7 = (char *)0x0;
    }
    else {
      *(void*)(lVar2 + 0x50) = 1;
      *(void*)(lVar2 + 0x54) = 0xe;
      _strlen(param_1);
      FUN_00f2d870();
      *(void*)(lVar2 + 100) = 0xffffffffffffffff;
      pcVar7 = (char *)0x0;
      if ((arg1 != (char *)0x0) && (param_2 != (void*)0x0)) {
        FUN_00f2fb40();
        *(void*)(lVar2 + 100) = *param_2;
        pcVar7 = (char *)0x0;
      }
    }
  }
  return pcVar7;
}

