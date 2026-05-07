// Function: FUN_00f31bf0
// Address: 00f31bf0
// Size: 546 bytes
// Class: Unknown

char * FUN_00f31bf0(char *param_1,void*param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined7 uVar7;
  int64_t this_ptr;
  
  lVar4 = FUN_00f2df60();
  FUN_00f2d870();
  pcVar5 = (char *)FUN_00f2fd80();
  if (param_2 != (void*)0x0) {
    FUN_00f2fb40();
    *(void*)(this_ptr + 8) = *param_2;
  }
  if (pcVar5 == (char *)0x0) goto LAB_00f31cd3;
  cVar3 = *pcVar5;
  uVar7 = (undefined7)((uint64_t)param_1 >> 8);
  param_1 = (char *)CONCAT71(uVar7,cVar3);
  if (cVar3 == '\0') goto LAB_00f31cd3;
  cVar2 = '<';
  if (cVar3 == '<') {
    cVar3 = pcVar5[1];
    param_1 = (char *)CONCAT71(uVar7,cVar3);
    if (cVar3 == '!') {
      cVar3 = pcVar5[2];
      param_1 = (char *)CONCAT71(uVar7,cVar3);
      if (cVar3 == '\0') {
        pcVar6 = "--";
        goto LAB_00f31cc9;
      }
      cVar2 = '-';
      if (cVar3 == '-') {
        cVar3 = pcVar5[3];
        param_1 = (char *)CONCAT71(uVar7,cVar3);
        if (cVar3 == '\0') {
          pcVar6 = "-";
          goto LAB_00f31cc9;
        }
        if (cVar3 == '-') {
          if (pcVar5[4] == '\0') {
            pcVar6 = "";
            goto LAB_00f31cc9;
          }
          cVar2 = '\0';
        }
      }
    }
    else {
      cVar2 = '!';
      if (cVar3 == '\0') {
        pcVar6 = "!--";
LAB_00f31cc9:
        cVar2 = *pcVar6;
      }
    }
  }
  if (cVar2 == '\0') {
    pcVar6 = pcVar5 + 4;
    lVar4 = 0;
    FUN_00f2d870(param_1,0);
    bVar1 = pcVar5[4];
    if (bVar1 != 0) {
      lVar4 = 0;
      do {
        pcVar5 = (char *)(uint64_t)bVar1;
        cVar3 = '-';
        if (bVar1 == 0x2d) {
          if (pcVar6[1] == '-') {
            pcVar5 = ">";
            if (pcVar6[2] == '\0') goto LAB_00f31de0;
            cVar3 = '>';
            if (pcVar6[2] == '>') {
              pcVar5 = "";
              if (pcVar6[3] == '\0') goto LAB_00f31de0;
              cVar3 = '\0';
            }
          }
          else {
            pcVar5 = "->";
            if (pcVar6[1] == '\0') {
LAB_00f31de0:
              cVar3 = *pcVar5;
            }
          }
        }
        if (cVar3 == '\0') {
          lVar4 = 3;
          break;
        }
        FUN_00f2d920(pcVar5,1);
        bVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      } while (bVar1 != 0);
    }
    return pcVar6 + lVar4;
  }
LAB_00f31cd3:
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x50) == '\0')) {
    *(void*)(lVar4 + 0x50) = 1;
    *(void*)(lVar4 + 0x54) = 10;
    _strlen(param_1);
    FUN_00f2d870();
    *(void*)(lVar4 + 100) = 0xffffffffffffffff;
    if ((pcVar5 != (char *)0x0) && (param_2 != (void*)0x0)) {
      FUN_00f2fb40();
      *(void*)(lVar4 + 100) = *param_2;
    }
  }
  return (char *)0x0;
}

