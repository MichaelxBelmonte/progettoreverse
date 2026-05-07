// Function: FUN_00b6a810
// Address: 00b6a810
// Size: 649 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00b6a810(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong unaff_RDI;
  float fVar8;
  undefined1 auVar7 [16];
  undefined4 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  bVar5 = *(byte *)(unaff_RDI + 0x140);
  bVar1 = *(byte *)(unaff_RDI + 0x141);
  if (bVar5 <= bVar1) {
    do {
      fVar10 = DAT_0241e624;
      switch((char)(bVar5 / 0xc) * -0xc + bVar5) {
      case 1:
        fVar10 = DAT_023908ec;
        break;
      default:
        goto switchD_00b6a891_caseD_2;
      case 3:
        break;
      case 6:
        fVar10 = DAT_0240e314;
        break;
      case 8:
        fVar10 = DAT_023d7ff8;
        break;
      case 10:
        fVar10 = DAT_023d7ff4;
      }
      uVar6 = *(byte *)(unaff_RDI + 0x140) / 0xc;
      iVar3 = (int)(char)(*(byte *)(unaff_RDI + 0x140) + (char)uVar6 * -0xc);
      fVar8 = 0.0;
      fVar10 = fVar10 + (float)(int)(bVar5 / 0xc - uVar6) * DAT_023d7fec +
                        (float)iVar3 * DAT_02421224;
      auVar11 = ZEXT416((uint)fVar10);
      FUN_01e436c0(iVar3,uVar6,fVar10,param_4,auVar11);
      fVar10 = 0.0;
      if (fVar8 < DAT_023d7ff0) {
        FUN_01e436c0();
        insertps(auVar11,ZEXT416((uint)(0.0 - (DAT_023d7ff0 - fVar10))),0x10);
      }
      cVar2 = FUN_00d05410(param_1);
      if (cVar2 != '\0') {
        return (ulonglong)bVar5;
      }
      bVar1 = *(byte *)(unaff_RDI + 0x141);
switchD_00b6a891_caseD_2:
      bVar5 = bVar5 + 1;
    } while (bVar5 <= bVar1);
    bVar5 = *(byte *)(unaff_RDI + 0x140);
  }
  if (bVar5 <= bVar1) {
    do {
      bVar4 = (char)(bVar5 / 0xc) * -0xc + bVar5;
      if ((0xab5U >> (bVar4 & 0x1f) & 1) != 0) {
        uVar6 = *(byte *)(unaff_RDI + 0x140) / 0xc;
        auVar7 = blendps(ZEXT416((uint)((float)(int)(bVar5 / 0xc - uVar6) * DAT_023d7fec +
                                        (float)(int)(char)(*(byte *)(unaff_RDI + 0x140) +
                                                          (char)uVar6 * -0xc) * DAT_02421224 +
                                       *(float *)(&DAT_023d80a4 + (ulonglong)bVar4 * 4))),
                         _DAT_0238ff00,0xe);
        auVar11 = auVar7;
        FUN_01e436c0();
        fVar10 = 0.0;
        uVar9 = 0;
        if (auVar7._4_4_ < DAT_023d7ff0) {
          FUN_01e436c0();
          auVar7._4_4_ = fVar10;
          auVar7._0_4_ = fVar10 + _DAT_023d8000 + DAT_0239424c;
          auVar7._8_4_ = uVar9;
          auVar7._12_4_ = uVar9;
          insertps(auVar11,auVar7,0x10);
        }
        cVar2 = FUN_00d05410(param_1);
        if (cVar2 != '\0') {
          return (ulonglong)bVar5;
        }
        bVar1 = *(byte *)(unaff_RDI + 0x141);
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 <= bVar1);
  }
  return 0xffffffff;
}


