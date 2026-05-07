// Function: FUN_01f99d80
// Address: 01f99d80
// Size: 821 bytes
// Class: GNColor
// String references:
//   "_availability_version_check"
//   "kCFAllocatorNull"
//   "CFDataCreateWithBytesNoCopy"
//   "CFPropertyListCreateWithData"
//   "CFPropertyListCreateFromXMLData"
//   "CFStringCreateWithCStringNoCopy"
//   "CFDictionaryGetValue"
//   "CFGetTypeID"
//   "CFStringGetTypeID"
//   "CFStringGetCString"
//   "CFRelease"
//   "/System/Library/CoreServices/SystemVersion.plist"
//   "ProductVersion"
//   "%d.%d.%d"

void FUN_01f99d80(FILE *param_1,char *param_2,size_t param_3,FILE *param_4)

{
  int64_t lVar1;
  char cVar2;
  size_t sVar3;
  size_t sVar4;
  void*puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  FILE *pFVar15;
  int extraout_var;
  void *pvVar16;
  uint32_t extraout_var_00;
  int64_t lVar17;
  int64_t lVar18;
  FILE *pFVar19;
  char unaff_DIL;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((((g_028bb2e8 == 0) || (unaff_DIL != '\0')) &&
      ((g_028bb2e8 = _dlsym(), g_028bb2e8 == 0 || (unaff_DIL != '\0')))) &&
     (puVar5 = (void*)_dlsym(), puVar5 != (void*)0x0)) {
    pFVar19 = (FILE *)*puVar5;
    pcVar6 = _dlsym();
    if (pcVar6 != 0x0) {
      pcVar7 = _dlsym();
      pcVar8 = _dlsym();
      if (((((pcVar7 != 0x0 || pcVar8 != 0x0) &&
            (pcVar9 = _dlsym(), pcVar9 != 0x0)) &&
           (pcVar10 = _dlsym(), pcVar10 != 0x0)) &&
          ((pcVar11 = _dlsym(), pcVar11 != 0x0 &&
           (pcVar12 = _dlsym(), pcVar12 != 0x0)))) &&
         ((pcVar13 = _dlsym(), pcVar13 != 0x0 &&
          ((pcVar14 = _dlsym(), pcVar14 != 0x0 &&
           (pFVar15 = _fopen((char *)param_1,param_2), pFVar15 != (FILE *)0x0)))))) {
        _fseek(param_1,2,param_3);
        sVar3 = _ftell(param_1);
        if (-1 < extraout_var) {
          _rewind(param_1);
          pvVar16 = _malloc((size_t)param_1);
          if (((pvVar16 != (void *)0x0) &&
              (sVar4 = _fread(pFVar15,sVar3,param_3,param_4), param_1 = pFVar15,
              CONCAT44(extraout_var_00,sVar4) == CONCAT44(extraout_var,sVar3))) &&
             (param_1 = pFVar19, lVar17 = (*pcVar6)(pFVar19,CONCAT44(extraout_var,sVar3)),
             lVar17 != 0)) {
            param_1 = (FILE *)0x0;
            if (pcVar7 == 0x0) {
              lVar17 = (*pcVar8)(0,0);
            }
            else {
              lVar17 = (*pcVar7)(0,0,0);
            }
            if (lVar17 != 0) {
              lVar17 = (*pcVar9)(pFVar19,0x600);
              if (lVar17 != 0) {
                lVar17 = (*pcVar10)();
                (*pcVar14)();
                if (lVar17 != 0) {
                  lVar17 = (*pcVar11)();
                  lVar18 = (*pcVar12)();
                  if (lVar17 == lVar18) {
                    pFVar19 = (FILE *)0x8000100;
                    cVar2 = (*pcVar13)(0x8000100,0x20);
                    if (cVar2 != '\0') {
                      pFVar19 = (FILE *)&g_028bb2d4;
                      _sscanf((char *)&g_028bb2d4,(char *)&g_028bb2d0,&g_028bb2d8);
                    }
                  }
                }
              }
              (*pcVar14)();
              param_1 = pFVar19;
            }
            (*pcVar14)();
          }
        }
        _free(param_1);
        _fclose(param_1);
      }
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}

