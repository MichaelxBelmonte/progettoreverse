// Function: FUN_01965590
// Address: 01965590
// Size: 1030 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01965590(pthread_key_t param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  void *pvVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  longlong *local_80;
  char local_78;
  undefined4 local_58;
  undefined8 uStack_50;
  longlong *local_38;
  char local_30;
  
  *(undefined8 *)(unaff_RDI + 0x1a8) = 0;
  uVar9 = *(undefined8 *)(unaff_RSI + 8);
  *(undefined8 *)(unaff_RDI + 0x1b0) = uVar9;
  fVar6 = (float)((ulonglong)uVar9 >> 0x20);
  fVar5 = fVar6 * DAT_02390d2c;
  *(float *)(unaff_RDI + 0x1ac) = 0.0 - (fVar6 + fVar6);
  *(float *)(unaff_RDI + 0x1b4) = fVar5;
  if (*(longlong *)(unaff_RDI + 0x178) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar6 = (float)FUN_01265b60();
    if (DAT_02390124 < fVar6) {
      fVar6 = *(float *)(unaff_RDI + 0x1b4);
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b60();
      fVar5 = (float)FUN_00aea6b0();
      fVar6 = fVar6 * fVar5;
      fVar6 = fVar6 + fVar6;
      *(float *)(unaff_RDI + 0x1ac) =
           (fVar6 - *(float *)(unaff_RDI + 0x1b4)) * DAT_02390118 + *(float *)(unaff_RDI + 0x1ac);
      *(float *)(unaff_RDI + 0x1b4) = fVar6;
    }
  }
  FUN_01989f80();
  lVar1 = *(longlong *)(unaff_RDI + 0x178);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  fVar6 = (float)(**(code **)((longlong)&dylib_command_000011b8.cmd + *local_38))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!NAN(fVar6)) {
    fVar5 = *(float *)(unaff_RDI + 0x1bc);
    fVar7 = (float)FUN_01964590();
    fVar5 = (fVar7 - fVar6) * fVar5;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      uStack_50 = *(undefined8 *)(unaff_RDI + 0x1b0);
      local_58 = (undefined4)*(undefined8 *)(unaff_RDI + 0x1a8);
      uVar9 = *(undefined8 *)(unaff_RDI + 0x1b0);
      uVar8 = FUN_00d052e0(*(undefined8 *)(unaff_RDI + 0x1a8),uVar9,local_58,uStack_50);
      *(undefined8 *)(unaff_RDI + 0x1a8) = uVar8;
      *(undefined8 *)(unaff_RDI + 0x1b0) = uVar9;
    }
  }
  FUN_01989f80();
  cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *local_38 + 0x40))();
  if (cVar3 == '\0') {
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = FUN_01965aa0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      uVar9 = *(undefined8 *)(unaff_RDI + 0x1b0);
      uVar8 = FUN_00d052e0(*(undefined8 *)(unaff_RDI + 0x1a8),uVar9,local_58,uStack_50);
      *(undefined8 *)(unaff_RDI + 0x1a8) = uVar8;
      *(undefined8 *)(unaff_RDI + 0x1b0) = uVar9;
    }
  }
  if ((*(char *)(unaff_RDI + 0x1c5) != '\0') && (cVar3 = FUN_01966100(), cVar3 != '\0')) {
    uVar9 = *(undefined8 *)(unaff_RDI + 0x1b0);
    uVar8 = FUN_00d052e0(*(undefined8 *)(unaff_RDI + 0x1a8),uVar9,local_58,uStack_50);
    *(undefined8 *)(unaff_RDI + 0x1a8) = uVar8;
    *(undefined8 *)(unaff_RDI + 0x1b0) = uVar9;
  }
  fVar7 = *(float *)(unaff_RDI + 0x1bc) * DAT_023908e0 * DAT_023908d8;
  fVar5 = 0.0;
  fVar6 = *(float *)(unaff_RSI + 8);
  uStack_50 = CONCAT44(fVar7,fVar6);
  FUN_01989f80();
  if (local_38 == (longlong *)0x0) {
    cVar3 = '\0';
  }
  else {
    FUN_01989f80();
    cVar3 = (**(code **)((longlong)&dylib_command_000013a0.dylib.name.offset + *local_80))();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    fVar5 = _DAT_0241b200 + 0.0;
    uStack_50 = CONCAT44(fVar7 + _UNK_0241b20c,fVar6 + _UNK_0241b208);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(ulonglong *)(unaff_RDI + 0x1b0);
  uVar9 = FUN_00d052e0(*(undefined8 *)(unaff_RDI + 0x1a8),*(ulonglong *)(unaff_RDI + 0x1b0),fVar5,
                       uStack_50);
  auVar2._8_4_ = auVar10._0_4_;
  auVar2._0_8_ = uVar9;
  auVar2._12_4_ = auVar10._4_4_;
  *(undefined1 (*) [16])(unaff_RDI + 0x1a8) = auVar2;
  uVar9 = FUN_00d05530();
  *(undefined8 *)(unaff_RDI + 0x1a8) = uVar9;
  *(longlong *)(unaff_RDI + 0x1b0) = auVar10._0_8_;
  return;
}


