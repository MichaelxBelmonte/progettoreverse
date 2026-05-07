// Function: FUN_0110c460
// Address: 0110c460
// Size: 599 bytes
// Class: MUAudioSourceDescription
// String references:
//   "float"
//   "MUAudioSourceDescription"
//   "GNInt"
//   "_sampleOffset"
//   "MUAudioSourceInstrument"
//   "_audioSourceInstrumentPortions"
//   "_amount"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0110c460(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar10;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025bc438;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02793290 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02793258 = FUN_0110c220();
        _DAT_02793250 = "_amount";
        _DAT_02793260 = 0;
        _DAT_02793268 = 0x6600;
        _DAT_02793270 = "float";
        _DAT_02793278 = 0;
        uRam0000000002793280 = 0;
        _DAT_02793288 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027932d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027932a0 = FUN_0110c220();
        _DAT_02793298 = "_sampleOffset";
        _DAT_027932a8 = 0;
        _DAT_027932b0 = 0x6900;
        _DAT_027932b8 = "GNInt";
        _DAT_027932c0 = 0;
        uRam00000000027932c8 = 0;
        _DAT_027932d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c710();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c800();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceInstrument");
  }
  return;
}


