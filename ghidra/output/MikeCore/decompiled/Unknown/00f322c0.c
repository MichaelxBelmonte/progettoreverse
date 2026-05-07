// Function: FUN_00f322c0
// Address: 00f322c0
// Size: 669 bytes
// Class: Unknown
// String references:
//   "<![CDATA["
//   "]]>"


char * FUN_00f322c0(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00f2d870(param_1,0);
  lVar2 = FUN_00f2df60();
  if (param_2 != (undefined8 *)0x0) {
    FUN_00f2fb40();
    *(undefined8 *)(unaff_RDI + 8) = *param_2;
  }
  if (*(char *)(unaff_RDI + 0x50) == '\0') {
    if ((unaff_RSI != (char *)0x0) &&
       (param_1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),*unaff_RSI), *unaff_RSI != '\0'))
    {
      lVar1 = 0;
      do {
        lVar3 = lVar1;
        cVar5 = "<![CDATA["[lVar3];
        if ((cVar5 == '\0') || ((char)param_1 != cVar5)) goto LAB_00f323bd;
        param_1 = (char *)(ulonglong)(byte)unaff_RSI[lVar3 + 1];
        lVar1 = lVar3 + 1;
      } while (unaff_RSI[lVar3 + 1] != 0);
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
    *(undefined1 *)(unaff_RDI + 0x50) = 1;
    if ((unaff_RSI != (char *)0x0) &&
       (param_1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),*unaff_RSI), *unaff_RSI != '\0'))
    {
      lVar1 = 0;
      do {
        lVar3 = lVar1;
        cVar5 = "<![CDATA["[lVar3];
        if ((cVar5 == '\0') || ((char)param_1 != cVar5)) goto LAB_00f3235d;
        param_1 = (char *)(ulonglong)(byte)unaff_RSI[lVar3 + 1];
        lVar1 = lVar3 + 1;
      } while (unaff_RSI[lVar3 + 1] != 0);
      cVar5 = "<![CDATA["[lVar3 + 1];
LAB_00f3235d:
      if (cVar5 == '\0') {
        pcVar7 = unaff_RSI + 9;
        cVar5 = unaff_RSI[9];
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
        if ((undefined8 *)PTR_DAT_0249c250 == &DAT_02802e90) {
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
      *(undefined1 *)(lVar2 + 0x50) = 1;
      *(undefined4 *)(lVar2 + 0x54) = 0xe;
      _strlen(param_1);
      FUN_00f2d870();
      *(undefined8 *)(lVar2 + 100) = 0xffffffffffffffff;
      pcVar7 = (char *)0x0;
      if ((unaff_RSI != (char *)0x0) && (param_2 != (undefined8 *)0x0)) {
        FUN_00f2fb40();
        *(undefined8 *)(lVar2 + 100) = *param_2;
        pcVar7 = (char *)0x0;
      }
    }
  }
  return pcVar7;
}


