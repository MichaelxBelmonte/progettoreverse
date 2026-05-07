// Function: FUN_01eb0440
// Address: 01eb0440
// Size: 1514 bytes
// Class: Unknown

void FUN_01eb0440(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  float *arg1;
  int64_t *this_ptr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  float fVar8;
  int64_t local_50;
  char local_48;
  
  g_02802fb8 = this_ptr[3];
  iVar1 = *(int *)(*param_2 + 0x44);
  FUN_00d50b00();
  if (iVar1 == 0) {
    fVar4 = (float)FUN_01f7c190();
    lVar2 = *(int64_t *)(*param_2 + 0x30);
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
      FUN_01d48b40(g_02390d34);
      (**(code **)(*this_ptr + 0x368))
                ((float)*(void*)(arg1 + 2) * g_023945d0 +
                 (float)*(void*)arg1);
      (**(code **)(*this_ptr + 0x378))(fVar4);
      uVar7 = ___sincosf_stret(fVar4);
      fVar5 = (float)((uint64_t)*(void*)(arg1 + 2) >> 0x20) *
              (float)((uint)uVar7 & g_02390140) +
              (float)((uint)((uint64_t)uVar7 >> 0x20) & g_02390140) *
              (float)*(void*)(arg1 + 2);
      fVar6 = g_023b5dd0 * fVar5;
    }
    else {
      fVar6 = (float)*(void*)arg1;
      fVar5 = (float)*(void*)(arg1 + 2);
    }
    if (1 < iVar1) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d21140();
      _CGFunctionCreate(4,&g_024225e0,&g_024225f0,&g_026aac90);
      _CGColorSpaceCreateDeviceRGB();
      _CGShadingCreateAxial(SUB84((double)fVar6,0),0,SUB84((double)(fVar6 + fVar5),0),g_023942d0);
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
    lVar2 = *(int64_t *)(*param_2 + 0x30);
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
    fVar8 = arg1[3] * g_0239011c;
    fVar5 = g_0239011c * arg1[2];
    fVar4 = arg1[1];
    fVar6 = *arg1;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d21140();
    _CGFunctionCreate(4,&g_02422630,&g_02422640,&g_026aaca8);
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

