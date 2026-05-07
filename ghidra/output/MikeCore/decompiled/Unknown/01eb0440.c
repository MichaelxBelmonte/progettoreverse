// Function: FUN_01eb0440
// Address: 01eb0440
// Size: 1514 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01eb088a) */
/* WARNING: Removing unreachable block (ram,0x01eb0893) */
/* WARNING: Removing unreachable block (ram,0x01eb08b6) */
/* WARNING: Removing unreachable block (ram,0x01eb08bf) */
/* WARNING: Removing unreachable block (ram,0x01eb05a0) */
/* WARNING: Removing unreachable block (ram,0x01eb05a9) */
/* WARNING: Removing unreachable block (ram,0x01eb05cc) */
/* WARNING: Removing unreachable block (ram,0x01eb05d5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eb0440(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *unaff_RSI;
  longlong *unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  longlong local_50;
  char local_48;
  
  DAT_02802fb8 = unaff_RDI[3];
  iVar1 = *(int *)(*param_2 + 0x44);
  FUN_00d50b00();
  if (iVar1 == 0) {
    fVar4 = (float)FUN_01f7c190();
    lVar2 = *(longlong *)(*param_2 + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01f7c100();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar1 = *(int *)(lVar2 + 0xc);
    if (*(int *)(local_50 + 0xc) < iVar1) {
      iVar1 = *(int *)(local_50 + 0xc);
    }
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      FUN_01d48370();
      FUN_01d48b40(DAT_02390d34);
      (**(code **)(*unaff_RDI + 0x368))
                ((float)*(undefined8 *)(unaff_RSI + 2) * _DAT_023945d0 +
                 (float)*(undefined8 *)unaff_RSI);
      (**(code **)(*unaff_RDI + 0x378))(fVar4);
      uVar7 = ___sincosf_stret(fVar4);
      fVar5 = (float)((ulonglong)*(undefined8 *)(unaff_RSI + 2) >> 0x20) *
              (float)((uint)uVar7 & _DAT_02390140) +
              (float)((uint)((ulonglong)uVar7 >> 0x20) & _DAT_02390140) *
              (float)*(undefined8 *)(unaff_RSI + 2);
      fVar6 = _DAT_023b5dd0 * fVar5;
    }
    else {
      fVar6 = (float)*(undefined8 *)unaff_RSI;
      fVar5 = (float)*(undefined8 *)(unaff_RSI + 2);
    }
    if (1 < iVar1) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d21140();
      _CGFunctionCreate(4,&DAT_024225e0,&DAT_024225f0,&DAT_026aac90);
      _CGColorSpaceCreateDeviceRGB();
      _CGShadingCreateAxial(SUB84((double)fVar6,0),0,SUB84((double)(fVar6 + fVar5),0),DAT_023942d0);
      _CGContextSaveGState();
      _CGContextClipToRect();
      _CGContextDrawShading();
      _CGContextRestoreGState();
      _CGShadingRelease();
      _CGColorSpaceRelease();
      _CGFunctionRelease();
      FUN_00d50b20();
    }
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      FUN_01d48390();
    }
    FUN_00d50b20();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01f7c100();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    fVar8 = unaff_RSI[3] * DAT_0239011c;
    fVar5 = DAT_0239011c * unaff_RSI[2];
    fVar4 = unaff_RSI[1];
    fVar6 = *unaff_RSI;
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d21140();
    _CGFunctionCreate(4,&DAT_02422630,&DAT_02422640,&DAT_026aaca8);
    _CGColorSpaceCreateDeviceRGB();
    _CGShadingCreateRadial(0,SUB84((double)(fVar4 + fVar8),0),0,(double)(fVar6 + fVar5));
    _CGContextSaveGState();
    _CGContextClipToRect();
    _CGContextDrawShading();
    _CGContextRestoreGState();
    _CGShadingRelease();
    _CGColorSpaceRelease();
    _CGFunctionRelease();
    FUN_00d50b20();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


